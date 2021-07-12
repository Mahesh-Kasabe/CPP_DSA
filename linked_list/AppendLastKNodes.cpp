#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node* next;
};

void display(Node* n){
    while(n != NULL){
    cout<<n->value<<"->";
    n = n->next;
    }

    cout<<"NULL"<<endl;
}

int length(Node *head){
    int l=0;
    Node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

Node* appendk(Node* &head , int k){
    Node* newhead;
    Node* newtail;
    Node* tail = head;

    int l=length(head);
    k=k%l;
    int counter=1;
    while(tail->next != NULL){
        if(counter==l-k){
                newtail = tail;
        }
        if(counter==l-k+1){
                newhead = tail;
        }
    tail = tail->next;
    counter++;
    }
    newtail->next = NULL;
    tail->next = head;

    return newhead;
}

int main(){

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    Node* sixth = new Node();

    head->value = 1;
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = fourth;

    fourth->value = 4;
    fourth->next = fifth;

    fifth->value = 5;
    fifth->next = sixth;

    sixth->value = 6;
    sixth->next = NULL;

    display(head);
    Node* newhead = appendk(head,3);
    display(newhead);

    return 0;

}