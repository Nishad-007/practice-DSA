#include <iostream>
using namespace std;

class node
{

    public:

    int data;
    node* next;

    node(int val){
        data =val;
        next = NULL;
    }
    
};

// void insertAtHead(node* &head, int val){
//     node* n = new node(val);
//     node* temp = head;
    
//     if (head==NULL)
//     {
//         n->next = head;
//         head=n;
//         return;
//     }
//     while (temp->next!=head)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->next = head;
//     head = n;
    
// }

void insertatTail(node* &head, int val){

    node* n = new node(val);

    if(head == NULL){
        head=n;
        return;
    }
    node* temp = head;

    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next= n;    

}

node* reverse(node* &head){
    node* prevptr =NULL;
    node* currptr = head;
    node* nextptr;

    while (currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
    

}

void display(node* head){
    if (head==NULL)
    {
        return;
    }
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){

    node* head = NULL;

    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    display(head);

    node* newhead = reverse(head);
    display(newhead);


}
