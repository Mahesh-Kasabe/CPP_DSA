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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight , rheight) + 1;
}

int calcDiameter(Node* root){

if(root == NULL){

    return 0;
}

int lheight = height(root->left);
int rheight = height(root->right);
int currDiameter = lheight + rheight + 1;

int ldiameter = calcDiameter(root->left);
int rdiameter = calcDiameter(root->right);

return max(currDiameter, max(ldiameter, rdiameter));

}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    //display(root);

    //cout<<height(root);
    cout<<calcDiameter(root);
    return 0;
}