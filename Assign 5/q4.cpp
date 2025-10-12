// Write a program to reverse a linked list.
// Input: 1->2->3->4->NULL
// Output: 4->3->2->1->NULL

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int v) : data(v), next(nullptr) {}
};

Node* head = nullptr;

void insertatEnd(int value) {
    Node* NewNode = new Node(value);
    if (head == nullptr) {
        head = NewNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr)
        current = current->next;

    current->next = NewNode;
}

void display() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

void reverseList() {
    Node *prev = nullptr, *current = head, *next = nullptr;

    while (current != nullptr) {
        next = current->next;  
        current->next = prev;   
        prev = current;         
        current = next;        
    }

    head = prev; 
}
int main(){
    insertatEnd(1);
    insertatEnd(2);
    insertatEnd(3);
    insertatEnd(4);

    cout << "Original List: ";
    display();

    reverseList();

    cout << "Reversed List: ";
    display();
}



