#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define vi vector<int>
#define ss second

struct Node{
    int key;
    struct Node* left;
    struct Node* right;
};

Node* newNode(int key){
    Node* node = new Node;
    node->key = key;
    node->left = node->right =  NULL;
    return node;
}

void getverticalorder(Node* root , int hdis, map<int , vi> &m){
    if(root == NULL){
        return;
    }

    m[hdis].push_back(root->key);
    getverticalorder(root->left , hdis-1, m);
    getverticalorder(root->right , hdis+1, m);


}

int main(){
    
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);

    map<int , vector<int> > m;
    int hdis =0;

    getverticalorder(root,hdis,m);

    map<int , vi> :: iterator it;
    for(it = m.begin(); it!=m.end(); it++)
    {
        for(int i=0; i<(it->ss).size(); i++)
        {
            cout<<(it->ss)[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}