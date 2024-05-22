#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue: ";
    q.show();

    cout << "Front: " << q.front() << endl;

    q.dequeue();
    cout << "Queue after dequeue: ";
    q.show();

    return 0;
}