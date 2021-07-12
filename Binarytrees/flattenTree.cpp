#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left = NULL;
    struct Node* right = NULL;

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
    cout<<root->data << " ";
    display(root->right);
}

void flatten(Node* root){
    if(root == NULL || root->left == NULL && root->right == NULL){
        return;
    }
    if(root->left !=NULL){
        flatten(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right;
        while(t->right != NULL){
            t = t->right;
        }

        t->right = temp;
    }

    flatten(root->right);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    display(root);
    cout<<" "<<endl;
    flatten(root);
    cout<<" "<<endl;
    display(root);
   return 0;
}