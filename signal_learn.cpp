//
// Created by ysnows on 2020/8/15.
//

#include <iostream>
#include <csignal>
#include <unistd.h>

void signalHandler(int sig) {
    cout << "caught signal: " << sig << endl;
    exit(sig);
}

void example() {
    signal(SIGINT, signalHandler);
    int i = 0;
    while (++i) {
        cout << "sleeping..." << endl;
        if (i > 3) {
            raise(SIGINT);
        }
        sleep(1);
    }
}








