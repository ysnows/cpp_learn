//
// Created by ysnows on 2020/8/14.
//

#ifndef CPP_RECTANGLE_H
#define CPP_RECTANGLE_H


#include "PaintCost.h"
#include "Shape.h"

class Rectangle : public Shape,public PaintCost {

public:

    Rectangle(double width, double height);

    double getArea() const override ;
};


#endif //CPP_RECTANGLE_H
