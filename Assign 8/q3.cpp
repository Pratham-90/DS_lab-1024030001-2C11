// 3. Write a program for binary search tree (BST) having functions for the following  
// operations:  
// (a) Insert an element (no duplicates are allowed),  
// (b) Delete an existing element,  
// (c) Maximum depth of BST  
// (d) Minimum depth of BST 

#include <iostream>
#include <vector>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };  

// Node* insert(Node* root, int key){
//     if(root == NULL){
//         return new Node(key);
//     }

//     else if(root->data > key){
//         root->left = insert(root->left, key);
//     }

//     else{
//         root->right = insert(root->right, key);
//     }
//     return root;
// }

// void inorder(Node* root){ // left -> root -> right
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// } 

// (a)
// int main(){
//     Node* root = NULL;

//     root = insert(root, 0);
//     insert(root, 2);
//     insert(root, 8);
//     insert(root, 3);
//     insert(root, 9);
//     insert(root, 7);
//     insert(root, 10);

//     inorder(root);
// }

// (b) Delete an element - 3 cases(no child, one child, two children)

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node* parent;

//     Node(int val){
//         data = val;
//         left = right = parent = NULL;
//     }
// };

// Node* insert(Node* root, int key, Node* parent = NULL){
//     if(root == NULL){
//         Node* nn = new Node(key);
//         nn->parent = parent;
//         return nn;
//     }

//     else if(root->data > key){
//         root->left = insert(root->left, key, root);
//     }

//     else{
//         root->right = insert(root->right, key, root);
//     }
//     return root;
// }

// Node* BSTcreate(vector<int> arr){
//     Node* root = NULL;
//     for (int val : arr){
//         root = insert(root, val);
//     }
//     return root;
// }

// Node* search(Node* root, int key){
//     if (root == NULL || root->data == key){
//         return root;
//     }

//     if (key < root->data){
//         return search(root->left, key);
//     }

//     return search(root->right, key);
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// Node* minimum(Node* root){
//     if(root == NULL){
//         return NULL;
//     }

//     while(root->left != NULL){
//         root = root->left;
//     }
//     return root;
// }

// Node* Successor(Node* x){
//     if (!x) return NULL;
//     if (x->right != NULL) return minimum(x->right);
//     Node* y = x->parent;
//     while (y != NULL && x == y->right){
//         x = y;
//         y = y->parent;
//     }
//     return y;
// }

// void treeDelete(Node*& root, Node* z) {
//     if (!z) return;

//     Node* y;
//     if (z->left == NULL || z->right == NULL) {
//         y = z;
//     } else {
//         y = Successor(z);
//     }

//     Node* x = (y->left != NULL) ? y->left : y->right;

//     if (x != NULL) {
//         x->parent = y->parent;
//     }

//     if (y->parent == NULL) {
//         root = x;
//     } else if (y == y->parent->left) {
//         y->parent->left = x;
//     } else {
//         y->parent->right = x;
//     }

//     if (y != z) {
//         z->data = y->data;
//     }
//     delete y;
// }

// void deleteKey(Node*& root, int key) {
//     Node* z = search(root, key);
//     if (z == NULL) {
//         cout << "Key " << key << " not found\n";
//         return;
//     }
//     treeDelete(root, z);
// }

// int maxDepth(Node* root){
//     if(root == NULL) return 0;
//     int left = maxDepth(root->left);
//     int right = maxDepth(root->right);
//     return 1 + max(left, right);
// }

// int minDepth(Node* root){
//     if(root == NULL) return 0;

//     if(root->left == NULL) {return 1 + minDepth(root->right);}
//     if(root->right == NULL) {return 1 + minDepth(root->left);}

//     return 1 + min(minDepth(root->left), minDepth(root->right));
// }

// int main(){
//     vector<int> arr = {15, 6, 18, 3, 7, 17, 20, 2, 4, 13, 9};
//     Node* root = BSTcreate(arr);

//     cout << "Before delete: ";
//     inorder(root);
//     cout << endl;

//     deleteKey(root, 6);
//     inorder(root);
//     cout << endl;

//     cout << "Max depth after delete: " << maxDepth(root) << endl;
//     cout << "Min depth after delete: " << minDepth(root) << endl;
// }
