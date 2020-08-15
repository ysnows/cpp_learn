//
// Created by ysnows on 2020/8/14.
//

#ifndef CPP_BOX_H
#define CPP_BOX_H

#include <iostream>


class Box {
    double length, breadth, height;
public:
    friend void printBoxWidth(Box box);

    double getVolume();

    Box();

    Box(double length, double height, double breadth);

    ~Box();

    int compare(Box other);

    static double allVolume();

    Box operator+(const Box &other);

};


#endif //CPP_BOX_H
