#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertathead(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}

void insertatTail(node* &head, int val){

    if(head == NULL){
        insertathead(head, val);
        return;
    }

    node * n = new node( val);
    node* temp = head;

    while (temp->next!=NULL)
    {       
        temp= temp->next;
    }
    temp->next = n;
    n->prev = temp;

}

void deletionAtHead(node *&head){
    if(head==NULL){
        return;
    }

    node* todelete = head;
    head=head->next;
    head->prev = NULL;

    delete todelete;
}

void deletion(node* &head, int val){

    if (val== head->data)    
    {
        deletionAtHead(head);
        return;
    }
  
    node* temp = head;
    while (temp->data!= val)
    {
        temp = temp->next;
        if (temp->next ==NULL & temp->data!=val)
        {
            cout<<"value not found"<<endl;
        }   
    }
    
    
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

    delete temp;
    
}

void display(node *&head)
{
    if (head == NULL)
    {
        return;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout <<"NULL"<< endl;
}

int main()
{

    node *head = NULL;

    insertathead(head, 1);
    insertatTail(head, 4);
    insertatTail(head, 3);
    insertatTail(head,5);
    insertatTail(head,6);
    insertatTail(head,7);

    // deletionAtHead(head);
    deletion(head,1);
    display(head);
}