// Implement Queue using Array in C++
// Given a queue data structure, implement it using an array. The queue should support the following operations: enqueue, dequeue, front, rear, and isEmpty.
// example: Enqueue 1, 2, 3 => output: Front element is: 1, Rear element is: 3 (after enqueuing 1, 2, and 3)

#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;
    int size;

public:
    Queue() {
        front = -1;
        rear = -1;
        size = 0;
    }

    void enqueue(int value) {
        if (size == MAX_SIZE) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        front++;
        size--;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Front element is: " << q.getFront() << endl;
    cout << "Rear element is: " << q.getRear() << endl;
    q.dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl;
    return 0;
}