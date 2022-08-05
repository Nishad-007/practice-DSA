#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next =NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    node* temp = head;

    if(head==NULL){
        n->next = n;
        head=n;
        return;
    }
    while (temp->next!=head)
    {
        temp = temp->next ;
    }
    temp->next=n;
    n->next=head;
    head=n;

}

void insertTail(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* temp = head;

    while (temp->next!=head)
    {
        temp = temp->next ;
    }
    temp->next=n;
    n->next=head;

};

void deleteAtHead(node* &head){
    node* temp = head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }

    node* todelete = head;
    temp->next = head->next;
    head=head->next;

    delete todelete;
    
}


void deletion(node* &head, int pos){
    node* temp = head;
    int count=1;

    if(pos == 1){
        deleteAtHead(head);
        return;
    }

    while(count!=pos-1){
       temp=temp->next;
       count++;
    }

    node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
}




void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
    
}

int main(){

    node* head = NULL;
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    insertTail(head,5);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,6);
    display(head);
}