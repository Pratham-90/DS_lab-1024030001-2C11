/* Develop a menu driven program demonstrating the following operations on simple
Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().*/
#include <iostream>
using namespace std;
#define MAXLEN 5

class Queue{
    int elements[MAXLEN];
    int front, rear;
    public:

    Queue(){
        front = rear = -1;
    }

    void display(){
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
}
        cout << "Your queue is: ";
        for (int i = front; i <= rear; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty(){
        if (front == -1){
            return true;}

        else return false;
    }

    bool isFull(){
        if (rear == MAXLEN - 1){
            return true;
        }

        else return false;
    }

    void size(){
         if (isEmpty()) {
            cout << "Queue size: 0\n";
        } else {
            cout << "Queue size: " << (rear - front + 1) << endl;
        }
    }

    void enqueue(int x){
        if (isFull()){
            cout << "Queue is Full" << endl;
            return;
        }

        else if(front == -1){
            front = rear = 0;
            elements[rear] = x;
        }

        else {
            elements[++rear] = x;
        }
    }

    void dequeue(){
        int y;
        if(isEmpty()){
            cout << "Queue is Empty" << endl;
            return;
        }

        else if(front == rear){
           y = elements[front];
           front = rear = -1;
           cout << "Popped element is: " << y << endl;
        }

        else{
            y = elements[front];
            front++;
            cout << "Popped element is: " << y << endl;
        }
    }

    void peek(){ 
        cout << "This is the peek element from front: "  << elements[front] << endl;
    }
};

int main(){
    Queue Q;
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    Q.peek();
    Q.size();
    Q.display();
    Q.dequeue();
    Q.dequeue();
    Q.size();
    Q.display();

}
