//
// Created by ysnows on 2020/8/15.
//

#include <iostream>
#include <pthread.h>

using namespace std;


struct ThreadData {
    int thread_id;
    char *message;
};

void *run(void *arg) {
    struct ThreadData *pInt = (struct ThreadData *) arg;
    cout << "Hello World " << pInt->message << "\n" << endl;

    pthread_exit(nullptr);
    return nullptr;
}


void example() {
    pthread_t th;
    pthread_attr_t attr;

    struct ThreadData pInt{};
    pInt.thread_id = random();
    pInt.message = (char *) "Hello Pthread";

    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    int res = pthread_create(&th, nullptr, run, &pInt);
    if (res) {
        cout << "create thread failed" << endl;
        exit(-1);
    }

    pthread_join(th, nullptr);

    pthread_attr_destroy(&attr);

//    pthread_exit(nullptr);

}






