//
// Created by odin on 15/11/2021.
//

#ifndef ANOMALY_DETECTION_EX2_ANOMALY_DETECTION_UTIL_H
#define ANOMALY_DETECTION_EX2_ANOMALY_DETECTION_UTIL_H
#include <vector>
using std::vector;

// returns the variance of X and Y
float var(float *x, int size);

// returns the covariance of X and Y
float cov(float *x, float *y, int size);

// returns the Pearson correlation coefficient of X and Y
float pearson(float *x, float *y, int size);

class Line {
public:
    float a, b;

    Line() : a(0), b(0) {}

    Line(float a, float b) : a(a), b(b) {}

    float f(float x) {
        return a * x + b;
    }
};

class Point {
public:
    float x, y;
    Point(float x, float y) : x(x), y(y) {}

};

// performs a linear regression and return s the line equation
Line linear_reg(Point **points, int size);

// returns the deviation between point p and the line equation of the points
float dev(Point p, Point **points, int size);

// returns the deviation between point p and the line
float dev(Point p, Line l);

Point* make_point_arr(float* a,float *b, int size);

#endif //ANOMALY_DETECTION_EX2_ANOMALY_DETECTION_UTIL_H