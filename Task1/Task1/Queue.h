class Queue {
private:
    struct Node {
        int data;
        Node* next;
        Node* prev;
        Node(int d) : data(d), next(nullptr), prev(nullptr) {}
    };

    Node* head;
    Node* tail;

public:
    Queue();
    ~Queue();
    void enqueue(int value);
    void dequeue();
    int front() const;
    bool isEmpty() const;
    void show() const;
};


