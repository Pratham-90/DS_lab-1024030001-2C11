// Write a program to find the middle of a linked list.
// Input: 1->2->3->4->5
// Output: 3

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

void Mid(){
    Node *slow = head, *fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle of the LL is: " << slow->data << endl;
}

int main(){
    insertatEnd(10);
    insertatEnd(20);
    insertatEnd(30);
    insertatEnd(40);
    insertatEnd(50);

    Mid();
}
