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

//deletion at head node
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;

    delete todelete;

}

//Node deletion which does not include head deletion i.e. deleteathead is a different function
void deletion(node* &head, int val){
    

    //if the LL is empty
    if(head==NULL){
        return;
    }
    //if the LL has only one node
    if(head->next=NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp= temp->next;
    }
    node* todelete = temp->next;
    temp->next= temp->next->next;

    delete todelete;

}

int main(){

   node* head = NULL;
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   display(head);

//    deletion(head,2);
   deleteAtHead(head);
   display(head);

}