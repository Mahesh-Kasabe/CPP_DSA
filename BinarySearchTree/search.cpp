#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* BST(Node* root , int val){
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = BST(root->left, val);
    } else {
        root->right = BST(root->right, val);
    }
    return root;

}



Node* searchInBST(Node* root , int key){
if(root == NULL){
    return NULL;
}
if(root->data == key){
    return root;
}

if(root->data > key){
    return searchInBST(root->left, key);
}
else{
    return searchInBST(root->right , key);
}

}



void display(Node* root){
    if(root == NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

int main(){
    Node* root = NULL;
    root = BST(root , 6);
    BST(root , 5);
    BST(root , 4);
    BST(root , 3);
    BST(root , 2);
    BST(root , 1);
    
    //display(root);

    if (searchInBST(root , 4) == NULL){
        cout<<"KEy Doesn't exist";
    }
    else {
        cout<<"Key exists";
    }

    return 0;
}