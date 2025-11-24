// 2. Implement following functions for Binary Search Trees
// (a) Search a given item (Recursive & Non-Recursive)
// (b) Maximum element of the BST
// (c) Minimum element of the BST
// (d) In-order successor of a given node the BST
// (e) In-order predecessor of a given node the BST

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

// Node* BSTcreate(vector<int> arr){
//     Node* root = NULL;

//     for(int val : arr){
//         root = insert(root, val);
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

// bool search(Node* root, int key){ // Recursive
//     if (root == NULL){
//         return false;
//     }

//     if(root->data > key){
//         return search(root->left, key);
//     }

//      else if(root->data < key){
//         return search(root->right, key);
//      }

//      else{
//         return true;
//      }
//      return false;
// }

// bool search(Node* root, int key){ // iterative
//     while (root != NULL){
//         if (root->data == key){
//             return true;
//         }
//         else if (root->data > key){
//             root = root->left;
//         }
//         else {
//             root = root->right;
//         }
//     }
//     return false;  
// }


// int main(){
//     vector<int> arr =  {2, 4, 1, 0, 5};

//     Node* root = BSTcreate(arr);
//     inorder(root);
//     cout << endl;
//     bool s = search(root, 0);
//     cout << s << endl;
// }

// (b)

// Node* max(Node* root){ // iterative
//     if (root == NULL) {return NULL;}

//     while (root->right != NULL){
//         root = root->right;
//     }
//     return root;
// }

// int main(){
//     vector<int> arr =  {2, 4, 1, 0, 5};

//     Node* root = BSTcreate(arr);
//     inorder(root);
//     cout << endl;
//     Node* maximum = max(root);
//     cout << maximum->data;
// }

// (c)

// Node* min(Node* root){ // iterative
//     if(root == NULL) { 
//         return NULL;
//     }

//     while(root->left != NULL){
//         root = root->left;
//     }
//     return root;
// }

// int main(){
//     vector<int> arr =  {2, 4, 1, 0, 5};

//     Node* root = BSTcreate(arr);
//     inorder(root);
//     cout << endl;
//     Node* minimum = min(root);
//     cout << minimum->data;
// }

//---------------------------------end-------------------------------------

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node* parent;

//     Node(int val){
//         data = val;
//         parent = left = right = NULL;
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

//     for(int val : arr){
//         root = insert(root, val);
//     }
//     return root;
// }

// Node* search(Node* root, int key) {
//     if (root->data == key)
//         return root;

//     if (key < root->data)
//         return search(root->left, key);

//     return search(root->right, key);
// }

// void inorder(Node* root){ // left -> root -> right
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// Node* minimum(Node* root){
//     while(root->left != NULL){
//         root = root->left;
//     }
//     return root;
// }

// Node* maximum(Node* root){
//     while(root->right != NULL){
//         root = root->right;
//     }
//     return root;
// }

// (d) Inorder Successor(with parent)


// Node* Successor(Node* x){
//     if(x->right != NULL){
//         return minimum(x->right);
//     }
//     Node* y = x->parent;
//     while(y != NULL && x == y->right){
//         x = y;
//         y = y->parent;
//     }
//     return y;
// }

// int main(){
//     vector<int> arr =  {2, 4, 1, 0, 5, 8, 10};

//     Node* root = BSTcreate(arr);
//     inorder(root);
//     cout << endl;
//     int key = 5;
//     Node* x = search(root, key);

//     Node* succ = Successor(x);
//     if(succ != NULL && x !=  NULL){
//         cout << "Successor of the key entered is: " << succ->data << endl;
//     }
// }

//(e) Inorder Predecessor(with parent)

// Node* Predecessor(Node* x){
//     if(x->left != NULL){
//         return minimum(x->left);
//     }

//     Node* y = x->parent;
//     while(y != NULL && y->left == x){
//         x = y;
//         y = y->parent;
//     }
//     return y;
// }

// int main(){
//     vector<int> arr =  {2, 4, 1, 0, 5, 8, 10};

//     Node* root = BSTcreate(arr);
//     inorder(root);
//     cout << endl;
//     int key = 5;
//     Node* x = search(root, key);

//     Node* pre = Predecessor(x);
//     if(pre != NULL && x !=  NULL){
//         cout << "Predecessor of the key entered is: " << pre->data << endl;
// }
// }
