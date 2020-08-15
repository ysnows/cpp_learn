//
// Created by ysnows on 2020/8/15.
//

#include <iostream>

using namespace std;

template<typename T>
inline T const &max(T &a, T &b) {
    return a > b ? a : b;
}

void example() {

    int a = 1;
    int b = 2;

    cout << "max(int, int)" << max(a, b) << endl;
//    cout << "max(double, double)" << max(1.0, 2.0) << endl;

}




