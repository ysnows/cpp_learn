//
// Created by ysnows on 2020/8/15.
//

#include <iostream>
#include <fstream>

using namespace std;


void example() {

    char buf[1024];
    ofstream out;
    out.open("hello.txt");

    cout << "writing to hello.txt" << endl;
    cout << "enter your name" << endl;

    cin >> buf;

    out << buf << endl;

    cout << "enter your age" << endl;

    cin >> buf;

    out << buf << endl;

    out.close();

    ifstream in;
    in.open("hello.txt");

    in.seekg(3, std::ios::end);

    in >> buf;
    cout << buf << endl;

//    in >> buf;
//    cout << buf << endl;

    in.close();



}
