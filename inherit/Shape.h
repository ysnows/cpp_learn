//
// Created by ysnows on 2020/8/14.
//


#ifndef CPP_SHAPE_H
#define CPP_SHAPE_H

#include <iostream>

using namespace std;


class Shape {


public:
    void setWidth(double width);

    void setHeight(double height);

    virtual double getArea() const = 0;

    Shape(double width, double height);


protected:
    double width, height;
};


#endif //CPP_SHAPE_H
