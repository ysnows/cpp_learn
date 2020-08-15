//
// Created by ysnows on 2020/8/13.
//
#include <iostream>
#include <ctime>

using namespace std;

void example() {
    time_t now = time(nullptr);
    char *timeStr = ctime(&now);
    std::cout << timeStr << std::endl;
    tm *t = gmtime(&now);
    timeStr = asctime(t);

    std::cout << now << std::endl;
    std::cout << timeStr << std::endl;
}
