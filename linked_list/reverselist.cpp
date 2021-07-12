#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node* next;
};

void display(Node* n){
    while(n != NULL){
        cout<<n->value<<endl;
        n=n->next;
    }
}

Node* reverse(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;

    while(currptr != NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value=1;
    head->next=second;

    second->value=2;
    second->next=third;

    third->value=3;
    third->next=NULL;

    display(head);

    Node* newhead= reverse(head);
    display(newhead);
}