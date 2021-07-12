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

bool isBST(Node* root, Node* min=NULL , Node* max=NULL){
    if(root == NULL){
            return true;
    }
    if(min != NULL && root->data <= min->data){
            return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }

    bool leftvalid = isBST(root->left, min , root);
    bool rightvalid = isBST(root->right, root , max);
    return leftvalid and rightvalid;
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
    struct Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    if(isBST(root , NULL , NULL)){
        cout<<"Valid BST"<<endl;
    } else{
        cout<<"InValid BST"<<endl;
    }

    display(root);

    return 0;
}