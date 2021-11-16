//
// Created by odin on 15/11/2021.
//

#include "timeseries.h"
#include <iostream>

using std::string;

void TimeSeries::print_features() {
    for (int i = 0; i < features.size(); i++) {
        std::cout << features[i].get_name() << std::endl;
        for (int j = 0; j < features[i].get_vec()->size(); j++) {

            std::cout << (*features[i].get_vec())[j] << std::endl;
        }
    }
}

vector<float> TimeSeries::get_vector_by_feature_name(string feature) const {
    for (int i = 0; i < features.size(); i++){
        //if the current feature is the feature we have accepted
        if(features[i].get_name().compare(feature) == 0)
            return *get_features()[i].get_vec();
    }
}

//int main() {
//    TimeSeries t;
//    t.print_features();
//}