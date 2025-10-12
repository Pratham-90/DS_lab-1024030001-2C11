/* Develop a menu driven program demonstrating the following operations on Circular Queues:
enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().*/

#include <iostream>
using namespace std;
#define MAXLEN 10

class Q {
private:
  int element[MAXLEN];
  int front, rear;

public:
  Q() { front = rear = -1; }
  bool isEmpty() {
    if (front == -1) {
      return true;
    } else
      return false;
  }
  bool isFull() {
    if (front == (rear + 1) % MAXLEN) {
      return true;
    } else
      return false;
  }
  void size() {
    if (isEmpty()) {
      cout << "The queue has size = 0" << endl;
    } else {
      cout << "The size of the queue is: "
           << (rear - front + MAXLEN) % MAXLEN + 1;
    }
  }
  void enqueue(int x) {
    if (isFull()) {
      cout << "OVERFLOW\n";
    } else if (front == -1 && rear == -1) {
      front = rear = 0;
      element[rear] = x;
      cout << "The inserted element is: " << x << endl;
    } else {
      rear = (rear + 1) % MAXLEN;
      element[rear] = x;
      cout << "The inserted element is: " << x << endl;
    }
  }
  void dequeue() {
    int y;
    if (isEmpty()) {
      cout << "UNDERFLOW\n";
    } else {
      if (front == rear){
        y = element[front];
        front = rear = -1;
        cout << "The element deleted: " << y << endl;
      }
      else {
        y = element[front];
        front = (front+1) % MAXLEN;
        cout << "The element deleted: " << y << endl;
      }
    }
  }
void display(){
  if (isEmpty()){
    cout << "QUEUE IS EMPTY" << endl;
  }
  else {
    cout << "QUEUE ELEMENTS: ";
    for (int i = front; i <= rear; i = (i+1)%MAXLEN){
      cout << element[i] << " ";
    }
    cout << endl;
  }
}
};

int main(){
  Q q;
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.display();
  q.size();
  q.enqueue(40);
  q.enqueue(50);
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
}
