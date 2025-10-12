// Write a program interleave the first half of the queue with second half.
// Sample I/P: 4 7 11 20 5 9 Sample O/P: 4 20 7 5 11 9
#include <iostream>
using namespace std;
#include <queue>
void display(queue <int> q3){
    while(!q3.empty()){
        cout << q3.front() << " "; 
        q3.pop();
    }
    cout << endl;
}

void transfer(queue <int> &q1,queue <int> &q2, queue <int> &q3){
    int x = q1.size()/2;
    for (int i = 0; i < x; i++){
        int y = q1.front();
        q1.pop();
        q2.push(y);
    }

    int l = q2.size(); // for odd no. of elements(instead of q1.size())
    for (int i = 0; i < l; i++){
        int z = q2.front();
        q2.pop();
        q3.push(z);
        z = q1.front();
        q1.pop();
        q3.push(z);
    }
}
int main(){
    queue <int> q1,q2,q3;
    q1.push(4);
    q1.push(7);
    q1.push(11);
    q1.push(20);
    q1.push(5);
    q1.push(9);

    transfer(q1, q2, q3);
    cout << "The resultant queue is: ";
    display(q3);
}
