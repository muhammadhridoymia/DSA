// Create a simple linked list in C++ and print its elements
//Given a linked list, create a simple linked list with a few nodes and print its elements. The linked list should support basic operations like adding nodes and printing the list.    
// example: Create a linked list with nodes containing values 1, 2, and 3 => output: Linked List: 1 -> 2 -> 3 (after creating the linked list and printing its elements)

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 2;
    head->next->next = new Node();
    head->next->next->data = 3;
    head->next->next->next = nullptr;


    Node* current = head;
    cout << "Linked List: ";
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;


    current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}