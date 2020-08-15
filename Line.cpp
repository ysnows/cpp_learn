//
// Created by ysnows on 2020/8/13.
//

#include "Line.h"

using namespace std;

int Line::getLength() {
    return *ptr;
}

Line::Line(int length) {

    cout << "调用构造函数" << endl;

    ptr = new int;
    *ptr = length;
}


Line::~Line() {
    cout << "释放内存" << endl;

    delete ptr;
}

Line::Line(const Line &line) {
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;

    *ptr = *line.ptr;
}

void Line::printLine() {
    cout << "line length is " << getLength() << endl;
}

