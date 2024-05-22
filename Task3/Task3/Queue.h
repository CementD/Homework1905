#include <iostream>
using namespace std;
template <class T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node* prev;
        Node(T d) : data(d), next(nullptr), prev(nullptr) {}
    };

    Node* head;
    Node* tail;

public:
    Queue();
    ~Queue();
    void enqueue(T value);
    void dequeue();
    T front() const;
    bool isEmpty() const;
    void show() const;
};

template <class T>
Queue<T>::Queue() : head(nullptr), tail(nullptr) {}

template <class T>
Queue<T>::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

template <class T>
void Queue<T>::enqueue(T value) {
    Node* newNode = new Node(value);
    if (isEmpty()) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

template <class T>
void Queue<T>::dequeue() {
    if (!isEmpty()) {
        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        }
        else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }
}

template <class T>
T Queue<T>::front() const {
    if (!isEmpty()) {
        return head->data;
    }
}

template <class T>
bool Queue<T>::isEmpty() const {
    return head == nullptr;
}

template <class T>
void Queue<T>::show() const {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

