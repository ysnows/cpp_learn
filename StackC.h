//
// Created by ysnows on 2020/8/15.
//

#ifndef CPP_STACKC_H
#define CPP_STACKC_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template<class T>
class StackC {

private:
    vector<T> list;

public:
    bool empty() const {       // 如果为空则返回真。
        return list.empty();
    }

    void push(const T &);
};


template<class T>
void StackC<T>::push(const T &t) {
    list.push_back(t);
}


#endif //CPP_STACKC_H
