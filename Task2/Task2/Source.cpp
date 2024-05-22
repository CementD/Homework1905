#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main() {
    PriorityQueue pq;

    pq.insertWithPriority(10, 2);
    pq.insertWithPriority(20, 1);
    pq.insertWithPriority(30, 3);
    pq.insertWithPriority(40, 2);

    cout << "Priority Queue: " << endl;
    pq.show();

    cout << "Peek: " << pq.peek() << endl;

    pq.pullHighestPriorityElement();
    cout << "Priority Queue after pull: " << endl;
    pq.show();
 
    return 0;
}
