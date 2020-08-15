//
// Created by ysnows on 2020/8/13.
//
#include <iostream>

using namespace std;

#include <iomanip>

using std::setw;

void example() {
    int n[10];

    for (int i = 0; i < 10; i++) {
        n[i] = i + 100;
    }

    for (int j = 0; j < 10; ++j) {
        cout << setw(10) << j << setw(10) << n[j] << endl;
    }

}


