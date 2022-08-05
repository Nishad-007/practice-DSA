#include <iostream>
using namespace std;

class node
{

    public:

    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertathead(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    if(head == NULL){
        n->next = n ;
        head = n;
        return;
    }

    while (temp->next != head)
    {
        temp= temp->next;
    }
    temp->next= n;
    n->next = head;
    head = n;
}

void insertatTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        insertathead(head,val);
        return;
    }

    node* temp = head;

    while (temp->next!= head)
    {
        temp= temp->next;
    }

    temp->next = n;
    n->next= head;
    
}

void deleteathead(node* &head){
    if(head == NULL){
        return;
    }
    node* temp = head;
    while (temp->next!=head)
    {
        temp= temp->next;
    }
    node* todelete = temp->next;
    temp->next= temp->next->next;
    head= head->next;

    
    delete todelete;
}

void deletion(node* &head, int val){
    if(head == NULL){
        return;
    }
    
    node* temp = head;
    while (temp->next->data!= val)
    {
        temp=temp->next;

    }
    node* todelete= temp->next;
    temp->next = temp->next->next;
    delete todelete;

    
}


void display(node* &head){

    // if(head == NULL){
    //     return;
    // }
    
    node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<head->data<<endl;
    
}




int main(){

    node* head =NULL;
    
    insertathead(head,1);
    insertathead(head,6);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    deleteathead(head);
    deletion(head,4);
    display(head);

}
