// Implement Stack using Array in C++


#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;
public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }
    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s(5);
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