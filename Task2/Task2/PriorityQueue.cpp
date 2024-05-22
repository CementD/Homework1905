#include "PriorityQueue.h"
#include <iostream>
using namespace std;

PriorityQueue::PriorityQueue() : head(nullptr) {}

PriorityQueue::~PriorityQueue() {
    while (!isEmpty()) {
        pullHighestPriorityElement();
    }
}

bool PriorityQueue::isEmpty() const {
    return head == nullptr;
}

bool PriorityQueue::isFull() const {
    return false;
}

void PriorityQueue::insertWithPriority(int value, int priority) {
    Node* newNode = new Node(value, priority);
    if (isEmpty() || head->priority < priority) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr && current->next->priority >= priority) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void PriorityQueue::pullHighestPriorityElement() {
    if (!isEmpty()) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int PriorityQueue::peek() const {
    if (!isEmpty()) {
        return head->data;
    }
}

void PriorityQueue::show() const {
    Node* current = head;
    while (current != nullptr) {
        cout << "Value: " << current->data << ", Priority: " << current->priority << endl;
        current = current->next;
    }
}
