cmake_minimum_required(VERSION 3.20)
project(anomaly_detection_Ex2)

set(CMAKE_CXX_STANDARD 11)

add_executable(anomaly_detection_Ex2 anomaly_detection_util.cpp anomaly_detection_util.h AnomalyDetector.h
        SimpleAnomalyDetector.cpp SimpleAnomalyDetector.h timeseries.cpp timeseries.h
        )
