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

if(root->data > val){
    root->left = BST(root->left , val);
} else {
    root->right = BST(root->right , val);
}

}

Node* deleteInBST(){



}

void display(Node* root){
    if(root== NULL){
        return;
    }

    display(root->left);
    cout<<root->data<<" ";
    display(root->right);

}

int main(){
    struct Node* root = NULL;
    root = BST(root , 5);
    BST(root , 4);
    BST(root , 3);
    BST(root , 2);
    BST(root , 6);
    BST(root , 1);

    display(root);   

    return 0;
}