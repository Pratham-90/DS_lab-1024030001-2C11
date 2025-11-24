// 1. Write program using functions for binary tree traversals: Pre-order, In-order and Post
// order using a recursive approach.

#include <iostream>
#include <vector>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int key){
    if(root == NULL){
        return new Node(key);
    }

    else if(root->data<key){
        root->right = insert(root->right, key); 
    }

    else if(root->data>key){
        root->left = insert(root->left, key); 
    }
    return root;
}

Node* BSTcreate(vector<int> arr){
    Node* root = NULL;

    for (int val : arr){
        root = insert(root, val); 
    }

    return root;
}

void inorder(Node* root){ // left->root->right
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root){ // root->left->right
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){ // left->right->root
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


int main(){
    vector<int> arr = {2,4,1,7,5,3};

    Node* root = BSTcreate(arr);
    preorder(root); 
    cout << endl;   
    inorder(root); // Sorted Array
    cout << endl;
    postorder(root);
}
