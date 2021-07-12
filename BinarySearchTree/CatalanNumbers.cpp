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

void display(Node* root){
    if(root == NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

int main(){
    struct Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    display(root);
    return 0;
}