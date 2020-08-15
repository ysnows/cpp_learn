//
// Created by ysnows on 2020/8/15.
//

#include <iostream>
#include <vector>

using namespace std;

void example() {
    vector<int> data;
    data.reserve(10);

    for (int i = 0; i < 10; ++i) {
        data.push_back(i);
    }

    cout << "data.size() = " << data.size() << endl;

    cout << "data[6] = " << data[6] << endl;

    auto v = data.begin();

    while (v != data.end()) {
        cout << "value = " << *v << endl;
        v++;
    }

}

