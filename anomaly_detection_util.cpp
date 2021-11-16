//
// Created by leonardo on 19/10/2021.
//

#include "anomaly_detection_util.h"
#include <cmath>

float avg(const float *x, int size) {
    float sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += x[i];
    }
    return sum / size;
}

float var(float *x, int size) {
    float *x_squared = new float[size];
    for (int i = 0; i < size; ++i) {
        x_squared[i] = x[i] * x[i];
    }
    float mu = avg(x, size);
    float avg_x_squared = avg(x_squared, size);
    delete[] x_squared;
    return avg_x_squared - mu * mu;
}

float cov(float *x, float *y, int size) {
    float *xy = new float[size];
    float e_xy, e_x, e_y;
    for (int i = 0; i < size; ++i) {
        xy[i] = x[i] * y[i];
    }
    e_xy = avg(xy, size);
    e_x = avg(x, size);
    e_y = avg(y, size);
    delete[] xy;
    return e_xy - e_x * e_y;
}

float pearson(float *x, float *y, int size) {
    float cov_x_y, sigma_x, sigma_y;
    cov_x_y = cov(x, y, size);
    sigma_x = sqrtf(var(x, size));
    sigma_y = sqrtf(var(y, size));
    return cov_x_y / (sigma_x * sigma_y);
}

Line linear_reg(Point **points, int size) {
    float *x_coordinate = new float[size];
    float *y_coordinate = new float[size];
    for (int i = 0; i < size; ++i) {
        x_coordinate[i] = points[i]->x;
        y_coordinate[i] = points[i]->y;
    }
    float a = cov(x_coordinate, y_coordinate, size) / var(x_coordinate, size);
    float b = avg(y_coordinate, size) - a * avg(x_coordinate, size);
    delete[]x_coordinate;
    delete[]y_coordinate;
    return {a, b};
}

float dev(Point p, Point **points, int size) {
    Line line = linear_reg(points, size);
    return dev(p, line);
}

float dev(Point p, Line l) {
    return std::abs(l.f(p.x) - p.y);
}

Point *make_point_arr(float *a, float *b, int size) {
    vector<Point> point_vec;
    for (int i = 0; i < size; i++) {
        point_vec.push_back(Point(a[i], b[i]));
    }
    return &point_vec[0];
}