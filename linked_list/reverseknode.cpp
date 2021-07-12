#include <iostream>
using namespace std;

class Node{
    public : 
    int value;
    Node* next;
};

Node* reversek(Node* &head , int k){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    int count = 0;
    while(currptr != NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr != NULL){
        head->next = reversek(nextptr , k);
    }
    return prevptr;

}
void display(Node* n){
    while(n != NULL){
    cout<<n->value<<"->";
    n = n->next;
    }

    cout<<"NULL"<<endl;
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
    int k = 3;
    Node* newhead = reversek(head , k);
    display(newhead);

    return 0;
}