// Write a program to find first non-repeating character in a string using Queue.
// Sample I/P: a a b c Sample O/P: a -1 b b
#include <iostream>
#include <queue>
using namespace std;

bool exists(queue<char> q, char ch) {
    while (!q.empty()) {
        if (q.front() == ch)
            return true;
        q.pop();
    }
    return false;
}

void firstNonRepeating(string s) {
    queue<char> q;
    string result = "";

    for (char ch : s) {
        if (exists(q, ch)) {
            queue<char> temp;
            while (!q.empty()) {
                if (q.front() != ch)
                    temp.push(q.front());
                q.pop();
            }
            q = temp; 
        } 
        else {
            q.push(ch); 
        }

        if (!q.empty())
            cout << q.front() << " ";
        else
            cout << "-1 ";
    }
    cout << endl;
}

int main() {
    string s = "aabc";
    cout << "Input: " << s << endl;
    cout << "Output: ";
    firstNonRepeating(s);
}
