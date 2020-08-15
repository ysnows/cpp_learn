//
// Created by ysnows on 2020/8/14.
//

#include "Shape.h"


void Shape::setWidth(double w) {
    this->width = w;
}

void Shape::setHeight(double h) {
    this->height = h;
}


Shape::Shape(double width, double height) : width(width), height(height) {}
