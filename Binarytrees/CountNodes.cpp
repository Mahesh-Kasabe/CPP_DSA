#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }

};

void display(struct Node* root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data;
    display(root->right);

}

int CountNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return CountNodes(root->left) + CountNodes(root->right) + 1;

}

int SumNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return SumNodes(root->left) + SumNodes(root->right) + root->data;

}

int main(){

struct Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);
root->right->left = new Node(6);
root->right->right = new Node(7);

//display(root);

cout<<CountNodes(root)<<endl;

cout<<SumNodes(root);

return 0;

}