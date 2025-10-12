// Write a program to count the number of occurrences of a given key in a singly linked
// list and then delete all the occurrences.
// Input: Linked List : 1->2->1->2->1->3->1 , key: 1
// Output: Count: 4 , Updated Linked List: 2->2->3.

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
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void deleteAllOccurrences(int value) {
    Node* current = head;
    Node* prev = nullptr;
    int count = 0;

    while (current != nullptr) {
        if (current->data == value) {
            count++;
            if (current == head) {  
                head = current->next;
                delete current;
                current = head;
            } else {  
                prev->next = current->next;
                delete current;
                current = prev->next;
            }
        } else {
            prev = current;
            current = current->next;
        }
    }

    cout << "Count: " << count << endl;
}

int main() {
    insertatEnd(10);
    insertatEnd(30);
    insertatEnd(20);
    insertatEnd(30);
    insertatEnd(40);
    insertatEnd(30);

    cout << "Original list: ";
    display();

    deleteAllOccurrences(30);

    cout << "Updated list: ";
    display();
}
