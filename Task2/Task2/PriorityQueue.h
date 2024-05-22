class PriorityQueue {
private:
    struct Node {
        int data;
        int priority;
        Node* next;
        Node(int d, int p) : data(d), priority(p), next(nullptr) {}
    };

    Node* head;

public:
    PriorityQueue();
    ~PriorityQueue();

    bool isEmpty() const;
    bool isFull() const;
    void insertWithPriority(int value, int priority);
    void pullHighestPriorityElement();
    int peek() const;
    void show() const;
};



