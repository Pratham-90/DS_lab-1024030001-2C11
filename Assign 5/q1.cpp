// 1. Develop a menu driven program for the following operations on a Singly Linked
// List.
// (a) Insertion at the beginning.
// (b) Insertion at the end.
// (c) Insertion in between (before or after a node having a specific value, say 'Insert a
// new Node 35 before/after the Node 30').
// (d) Deletion from the beginning.
// (e) Deletion from the end.
// (f) Deletion of a specific node, say 'Delete Node 60').
// (g) Search for a node and display its position from head.
// (h) Display all the node values.

#include <iostream>
using namespace std;

/* class Node {
public:
  int data;
  Node *next;
  Node(int v) : data(v), next(nullptr) {}
};
Node *head = nullptr; 

(h)
void display() {
  Node *current = head;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

(a)
void insertAtBeginning(int value) {
  Node *NewNode = new Node(value);
  NewNode->next = head;
  head = NewNode;
}

int main() {
  insertAtBeginning(10);
  insertAtBeginning(20);
  insertAtBeginning(30);

  cout << "Linked list inserted from beginning: ";
  display(); 
}


(b)
void insertatEnd(int value){
    Node *NewNode = new Node(value);
    if (head == nullptr){ head = NewNode; }

    else{
    Node *current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = NewNode;
}
}

int main(){
    insertatEnd(10);
    insertatEnd(20);
    insertatEnd(30);

    cout << "Linked List inserted from end: ";
    display();
}


(c)
void insertatEnd(int value) {
    Node *NewNode = new Node(value);
    if (head == nullptr) {
        head = NewNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = NewNode;
}

void insertafterSpecific(int value, int spec_val) {
    Node *NewNode = new Node(value);

    if (head == nullptr) {
        head = NewNode;
        return;
    }

    Node *current = head;
    while (current != nullptr && current->data != spec_val) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Value not found" << endl; 
        return;
    }

    NewNode->next = current->next;
    current->next = NewNode;
}

int main() {
    insertatEnd(10);
    insertatEnd(20);
    insertatEnd(30);
    insertatEnd(40);

    insertafterSpecific(35, 30);
    cout << "Linked List after insertion after a specific value: ";
    display();
}


(d)
void insertatEnd(int value) {
    Node *NewNode = new Node(value);
    if (head == nullptr) {
        head = NewNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = NewNode;
}

void deletefromBeginning(){
  if(head == nullptr){
    cout << "Nothing to delete" << endl;
  }
  else{
  Node *temp = head;
  head = head->next;
  delete temp;
}
}

int main(){
  insertatEnd(10);
  insertatEnd(20);
  insertatEnd(30);
  insertatEnd(40);

  deletefromBeginning();
  display();
}


(e)
void insertatEnd(int value) {
    Node *NewNode = new Node(value);
    if (head == nullptr) {
        head = NewNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = NewNode;
}

void deletefromEnd(){
    if (head == nullptr){
    cout << "nothing to delete" << endl;
    return;
    }
    else if(head->next == nullptr){
      delete head;
      head = nullptr;
    }

    else{
      Node *current = head;
      while(current->next->next != nullptr){
        current = current->next;
      }
      delete current->next;
      current->next = nullptr;
    }
}

int main(){
  insertatEnd(10);
  insertatEnd(20);
  insertatEnd(30);
  insertatEnd(40);

  deletefromEnd();
  display();
}


(f)
void insertatEnd(int value) {
    Node *NewNode = new Node(value);
    if (head == nullptr) {
        head = NewNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = NewNode;
}

void deleteatSpecific(int value){
    if (head == nullptr){
      cout << "nothing to delete" << endl;
      return;
    }

    Node *temp = head;
    Node *pre = nullptr;

    while (temp != nullptr && temp->data != value){
      pre = temp;
      temp = temp->next;
    }

    if(temp == head){
      head = head->next;
    }

    else if(temp->next == nullptr){
      pre->next = nullptr;
    }

    else{
      pre->next = temp->next;
    }
    delete temp;
  }

  int main(){
    insertatEnd(10);
    insertatEnd(20);
    insertatEnd(30);
    insertatEnd(40);

    deleteatSpecific(30);
    display();
  }


(g)
void insertatEnd(int value) {
    Node *NewNode = new Node(value);
    if (head == nullptr) {
        head = NewNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = NewNode;
}

bool search(int val) {
    Node *current = head;
    
    while (current != nullptr) {
        if (current->data == val)
            return true;   
        current = current->next;
    }

    return false;  
}


int main(){
  insertatEnd(10);
  insertatEnd(20);
  insertatEnd(30);
  insertatEnd(40);

  bool ans = search(40);
  cout << ans;
}
*/
