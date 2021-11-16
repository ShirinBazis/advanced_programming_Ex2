//
// Created by odin on 15/11/2021.
//
#include "SimpleAnomalyDetector.h"
#include "anomaly_detection_util.h"
#include <cmath>

#define MIN_CORRLATION 0.9
#define SCALE 1.1

correlatedFeatures *create_correlated_features(string feature1, string feature2, float corrlation, Line lin_reg,
                                               Point *point_arr, int arr_size) {
    correlatedFeatures *new_cf = new correlatedFeatures;
    new_cf->feature1 = feature1;
    new_cf->feature2 = feature2;
    new_cf->corrlation = corrlation;
    new_cf->lin_reg = lin_reg;
    new_cf->arr_size = arr_size;
    new_cf->point_arr = point_arr;
    new_cf->threshold = 0;
    return new_cf;
}

void SimpleAnomalyDetector::learnNormal(const TimeSeries &ts) {
    for (int i = 0; i < ts.get_features().size(); i++) {
        int m = 0, c = -1;
        int j = i + 1;
        for (; j < ts.get_features().size(); j++) {
            if (float p = fabs(pearson(&(*ts.get_features()[i].get_vec())[0], &(*ts.get_features()[j].get_vec())[0],
                                       ts.get_features()[i].get_vec()->size()) > m)) {
                m = p;
                c = j;
            }
        }
        if (c != -1) {
            int arr_size = ts.get_features()[i].get_vec()->size();
            Point *points_arr = make_point_arr(&(*ts.get_features()[i].get_vec())[0],
                                               &(*ts.get_features()[j].get_vec())[0], arr_size);
            if (m > MIN_CORRLATION) {
                correlatedFeatures *new_cf = create_correlated_features(ts.get_features()[i].get_name(),
                                                                        ts.get_features()[j].get_name(), m,
                                                                        linear_reg(&points_arr, arr_size), points_arr,
                                                                        arr_size);
                getNormalModel().push_back(*new_cf);
            }
        }
    }
    for (int i = 0; i < getNormalModel().size(); ++i) {
        float deviation = 0;
        for (int j = 0; j < getNormalModel()[i].arr_size; ++j) {
            float temp = dev(getNormalModel()[i].point_arr[j], getNormalModel()[i].lin_reg);
            if (temp > deviation) {
                deviation = temp;
            }
        }
        getNormalModel()[i].threshold = deviation * SCALE;
    }
}


vector<AnomalyReport> SimpleAnomalyDetector::detect(const TimeSeries &ts) {
    string feature1, feature2;
    int size= getNormalModel().size();
    for(int i=0; i<size; i++) {
        feature1 = getNormalModel()[i].feature1;
        feature2 = getNormalModel()[i].feature2;
        vector<float> vector1 = ts.get_vector_by_feature_name(feature1);
        vector<float> vector2 = ts.get_vector_by_feature_name(feature2);
        for (int j=0; j <vector1.size(); j++) {
              float x= vector1[j];
              float y= vector2[j];
              Point p(x, y);
              Line linear_reg = getNormalModel()[i].lin_reg;
              float deviation= dev(p, linear_reg);
              //if the deviation is bigger than the threshold,
              if(deviation > getNormalModel()[i].threshold){
                  //change time!!!!!!!!!!!!!
                  AnomalyReport ap("Error", 0);
              }
          }
        //return vector<AnomalyReport>();
    }
    //ts.get_features();
}
