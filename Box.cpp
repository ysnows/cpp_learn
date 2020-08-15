//
// Created by ysnows on 2020/8/14.
//

#include "Box.h"

using namespace std;


double Box::getVolume() {
    return length * breadth * height;
}


Box::Box() {
    length = 1024.0;
    breadth = 21.0;
    height = 11.0;
}

Box::Box(double length, double height, double breadth) : length(length), height(height),
                                                         breadth(breadth) {


}

Box::~Box() {
    std::cout << "Object is destroyed" << std::endl;
}

void printBoxWidth(Box box) {
    cout << "Box width: " << box.breadth << endl;

}

int Box::compare(Box other) {

    return this->getVolume() > other.getVolume();
}

double Box::allVolume() {
    return 1024;
}

Box Box::operator+(const Box &other) {
    Box box;
    box.breadth = this->breadth + other.breadth;
    box.height = this->height + other.height;
    box.length = this->length + other.length;

    return box;
}


