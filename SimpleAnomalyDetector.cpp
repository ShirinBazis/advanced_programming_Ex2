//Leonardo Rodin 207377151
//Shirin Bazis 211492970

#include "SimpleAnomalyDetector.h"
#include "anomaly_detection_util.h"

#define MIN_CORRLATION 0.9
#define SCALE 1.1

correlatedFeatures create_correlated_features(string feature1, string feature2, float corrlation, Line lin_reg,
                                              vector<Point *> point_vec, int arr_size) {
    correlatedFeatures new_cf;
    new_cf.feature1 = feature1;
    new_cf.feature2 = feature2;
    new_cf.corrlation = corrlation;
    new_cf.lin_reg = lin_reg;
    new_cf.arr_size = arr_size;
    new_cf.point_vec = point_vec;
    new_cf.threshold = 0;
    return new_cf;
}

void SimpleAnomalyDetector::learnNormal(const TimeSeries &ts) {
    int features_size = ts.get_features().size();
    for (int i = 0; i < features_size; i++) {
        float m = 0;
        int c = -1;
        for (int j = i + 1; j < features_size; j++) {
            float p = fabs(pearson(&ts.get_features()[i].get_vec()[0], &ts.get_features()[j].get_vec()[0],
                                   ts.get_features()[i].get_vec().size()));
            if (p > m) {
                m = p;
                c = j;
            }
        }
        if (c != -1) {
            int arr_size = ts.get_features()[i].get_vec().size();
            vector<Point *> point_vec(arr_size);
            for (int k = 0; k < arr_size; k++) {
                point_vec[k] =
                        new Point(ts.get_features()[i].get_vec()[k], ts.get_features()[c].get_vec()[k]);
            }
            string name1 = ts.get_features()[i].get_name();
            if (m > MIN_CORRLATION) {

                correlatedFeatures new_cf = create_correlated_features(ts.get_features()[i].get_name(),
                                                                       ts.get_features()[c].get_name(), m,
                                                                       linear_reg(&point_vec[0], arr_size),
                                                                       point_vec,
                                                                       arr_size);

                cf.push_back(new_cf);
            }
        }
    }

    for (int i = 0; i < getNormalModel().size(); ++i) {
        float deviation = 0;
        for (int j = 0; j < getNormalModel()[i].arr_size; ++j) {
            float temp = dev(*getNormalModel()[i].point_vec[j], getNormalModel()[i].lin_reg);
            if (temp > deviation) {
                deviation = temp;
            }
        }
        cf[i].threshold = deviation * SCALE;
    }
}


vector<AnomalyReport> SimpleAnomalyDetector::detect(const TimeSeries &ts) {
    vector<AnomalyReport> report;
    string feature1, feature2;
    int size = getNormalModel().size();
    for (int i = 0; i < size; i++) {
        feature1 = getNormalModel()[i].feature1;
        feature2 = getNormalModel()[i].feature2;
        vector<float> vector1 = ts.get_vector_by_feature_name(feature1);
        vector<float> vector2 = ts.get_vector_by_feature_name(feature2);
        for (int j = 0; j < vector1.size(); j++) {
            float x = vector1[j], y = vector2[j];
            Point p(x, y);
            Line linear_reg = getNormalModel()[i].lin_reg;
            float deviation = dev(p, linear_reg);
            //cout<<"dev is: "<<deviation<<" but tresh is: "<<getNormalModel()[i].threshold<<endl;
            //if the deviation is bigger than the threshold, it will be reported as an anomaly
            if (deviation > getNormalModel()[i].threshold) {
                string description = feature1 + "-" + feature2;
                AnomalyReport ap(description, j + 1);
                report.push_back(ap);
            }
        }
    }
    return report;
}

SimpleAnomalyDetector::~SimpleAnomalyDetector() noexcept {
    int model_size = getNormalModel().size();
    for (int i = 0; i < model_size; i++) {
        int vec_size = getNormalModel()[i].point_vec.size();
        for (int j = 0; j < vec_size; j++) {
            delete (getNormalModel()[i].point_vec[j]);
        }
    }
}
