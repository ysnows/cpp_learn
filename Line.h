//
// Created by ysnows on 2020/8/13.
//

#ifndef CPP_LINE_H
#define CPP_LINE_H
#include <iostream>


class Line {
public:
    int getLength(void);

    Line(int length);

    ~Line();

    Line(const Line &line);

    void printLine();

private:
    int *ptr;

};


#endif //CPP_LINE_H
