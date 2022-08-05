#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next=n;    
};

void display(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<< temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

// This is an iterative way
node* reverse(node* &head){

    node* prevptr= NULL;
    node* currptr= head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next=prevptr;

        prevptr= currptr;
        currptr=nextptr;
    }

    return prevptr;
}

// This is an recursive way
node* reverseRecurisve(node* &head){
    
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    node* newhead = reverseRecurisve(head->next);
    
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

    // node* newhead = reverse(head);
    node* newhead = reverseRecurisve(head);
    display(newhead);
}