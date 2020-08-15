//
// Created by ysnows on 2020/8/15.
//

#include <iostream>


class MyException : public std::exception {

public:
    const char *what() const _NOEXCEPT override {
        return "MyException ";
    }
};


int division(int dividend, int divisor) {
    if (divisor == 0) {
        throw MyException();
    }

    return dividend / divisor;
}

void example() {


    try {
        division(10, 0);

    } catch (MyException &e) {

        cout << "exception thrown " << e.what() << endl;

    }


}

