#include<iostream>
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


void insertatail(node* &head,int val){

    node* n= new node(val);

    if(head ==NULL){
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=n;
}




bool detectcycle(node* &head){
    node* slow = head;
    node* fast = head;

    while (fast!= NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            return true;
        }
    }
    return false;
  
}


void removecycle(node* &head){

    node* slow = head;
     node* fast = head;

    while(fast!= NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
    }
    
     
}


void display(node* &head){
    node* temp = head;

    if(head == NULL){
        return;
    }
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}


int main(){

    node* head= NULL;

    insertatail(head,1);
    insertatail(head,2);
    insertatail(head,3);
    insertatail(head,4);
    insertatail(head,5);

    // makecycle(head, 3);
    cout<<detectcycle(head)<<endl;
    // display(head);


}

