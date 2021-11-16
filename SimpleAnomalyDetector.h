//
// Created by odin on 15/11/2021.
//

#ifndef ANOMALY_DETECTION_EX2_SIMPLEANOMALYDETECTOR_H
#define ANOMALY_DETECTION_EX2_SIMPLEANOMALYDETECTOR_H

#include "anomaly_detection_util.h"
#include "AnomalyDetector.h"
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>

using std::vector;
using std::string;

struct correlatedFeatures {
    string feature1, feature2;  // names of the correlated features
    Line lin_reg;
    Point* point_arr;
    int arr_size;
    float corrlation;
    float threshold;
};


class SimpleAnomalyDetector : public TimeSeriesAnomalyDetector {
    vector<correlatedFeatures> cf;
public:
    SimpleAnomalyDetector()= default;

    virtual ~SimpleAnomalyDetector();

    virtual void learnNormal(const TimeSeries &ts);

    virtual vector<AnomalyReport> detect(const TimeSeries &ts);

    vector<correlatedFeatures> getNormalModel() {
        return cf;
    }
};



#endif //ANOMALY_DETECTION_EX2_SIMPLEANOMALYDETECTOR_H
