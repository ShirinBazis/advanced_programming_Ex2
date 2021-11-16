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

vector<feature> TimeSeries::get_features() const {
    return features;
}

int main() {
    TimeSeries t;
    t.print_features();
}