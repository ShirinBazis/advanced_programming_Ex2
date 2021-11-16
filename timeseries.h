//
// Created by odin on 15/11/2021.
//

#ifndef ANOMALY_DETECTION_EX2_TIMESERIES_H
#define ANOMALY_DETECTION_EX2_TIMESERIES_H


#include <fstream>
#include <iostream>
#include <vector>
#include <iosfwd>

using std::vector;
using std::string;

class feature {
    string name;
    vector<float> values;
public:
    explicit feature(string &name) : name(name) {
    }

    string get_name() {
        return name;
    }

    vector<float> *get_vec() {
        return &values;
    }
};

class TimeSeries {
    string csv = "/home/odin/CLionProjects/Ass2/file.csv";
    //string csv = "/home/odin/CLionProjects/Ass2/file.csv";
    vector<feature> features;

public:

    //TimeSeries(const char* CSVfileName){
    //}

    explicit TimeSeries() {
        std::ifstream my_file;
        //opens csv file and gathers data
        my_file.open(csv);
        string line;
        size_t position;
        //indicator of first line read
        int flag = 1;
        while (getline(my_file, line)) {
            int counter = 0;
            while ((position = line.find(',')) != string::npos) {
                string token = line.substr(0, position);
                //checks flag
                if (flag) {
                    //inserts new feature object
                    features.emplace_back(feature(token));
                } else {
                    //inserts new value to feature's vector numbered by counter
                    features[counter].get_vec()->push_back(std::stof(token));
                    counter++;
                }
                line.erase(0, position + 1);
            }
            //checks flag
            if (flag) {
                //inserts new feature object
                features.emplace_back(feature(line));
                //changes flag's state
                flag = 0;
            } else {
                //inserts new value to feature's vector numbered by counter
                features[counter].get_vec()->push_back(std::stof(line));
            }
        }
        my_file.close();
    };

    vector<feature> get_features() const;

    void print_features();
};


#endif //ANOMALY_DETECTION_EX2_TIMESERIES_H
