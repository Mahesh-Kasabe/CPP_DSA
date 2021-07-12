#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

};

void printlist(Node* n){
    while(n != NULL){
        cout<<n->value<<endl;
        n=n->next;
    }
}

/*void insertatfront(Node**head , int new_value){
    //prepare a new node
    Node* new_node = new Node();
    new_node->value = new_value;

    //put it infront of cuurent head
    new_node->next= *head;

    //move head pointer to new node 
    *head = new_node;

}*/

/*void insertatend(Node**head , int new_value){
    //prepare a new node 
    Node* new_node = new Node();
    new_node->value = new_value;
    new_node->next = NULL;

    //find last node 
    Node* last = *head;
    while(last->next != NULL){
        last = last->next;
    }

    //add new node after last node
    last->next = new_node;

}*/

/*void insertafternode(Node*prev , int new_value){
    //prepare a new node
    Node* newnode = new Node();
    newnode->value = new_value;

    //insert new node after previous
    newnode->next = prev->next;
    prev->next = newnode;

}*/

int main(){

    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->value=1;
    head->next=second;

    second->value=2;
    second->next=third;

    third->value=3;
    third->next=NULL;

    //insertafternode(second , 32);
    //insertatend(&head , 4);
    //insertatfront(&head , -1);
    printlist(head);

    return 0;
}