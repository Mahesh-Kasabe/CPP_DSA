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
////// Floyeds Algorithm //////

bool detectcycle(Node* &head){
    Node* slow=head;
    Node* fast=head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}

void removecycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    
    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;

    }
    slow->next = NULL;
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
    sixth->next = third;

    //display(head);
    cout<<detectcycle(head)<<endl;
    removecycle(head);
    cout<<detectcycle(head)<<endl;
    display(head);

    return 0;

}