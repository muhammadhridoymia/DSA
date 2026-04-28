// Implement Stack using Linked List in C++
// A stack is a linear data structure that follows the Last In First Out (LIFO) principle. In this implementation, we will use a linked list to create a stack. The stack will support the following operations: push, pop, peek, and isEmpty.


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    cout << "Top element is: " << s.peek() << endl;
    s.pop();
    s.pop();
    s.pop();
    return 0;
}