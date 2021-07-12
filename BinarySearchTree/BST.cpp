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

Node* insertBST(Node* root , int val){
    if(root == NULL){
            return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left , val);

    }
    else{
        root->right = insertBST(root->right , val);

    }
    return root;

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
    root = insertBST(root , 5);
    insertBST(root , 1);
    insertBST(root , 3);
    insertBST(root , 4);
    insertBST(root , 2);
    insertBST(root , 7);

    display(root);

    return 0;
}