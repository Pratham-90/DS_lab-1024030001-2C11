// 4. Write a program to determine whether a given binary tree is a BST or not.
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

bool checkBST(Node* root, int minVal, int maxVal){
    if (root == NULL){
        return true;
    }

    if (root->data <= minVal || root->data >= maxVal){
        return false;
    }
    return checkBST(root->left, minVal, root->data) && checkBST(root->right, root->data, maxVal);
}

bool isBST(Node* root){
    return checkBST(root, INT_MIN, INT_MAX);
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);

    if (isBST(root)){
        cout << "This is a BST" << endl;
    }
    else{
        cout << "This is NOT a BST" << endl;
    }
}
