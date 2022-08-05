// this code is short and concise. LL 1 is more focused on explanation

#include<iostream>

using namespace std;

class node
{

    public:

    int data;
    node* next;

    node(int val){
        data= val;
        next = NULL;
    }

};

node* deletion(node* &head){
    node* slowptr = head;
    node* fastptr = head;
    node* prev= NULL;

    while (fastptr!= NULL && fastptr->next!=NULL)
    {
        prev = slowptr;
        slowptr= slowptr->next;
        fastptr = fastptr->next->next;
    }

    if (prev!=NULL)
    {
        prev->next = prev->next->next;
    }
    

    return prev;
    
}

void display(node* &head){
    if (head==NULL)
    {
        return; 
    }

    node* temp = head;

    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    
}

int main(){

    // n is the no of nodes in the LL
    int n;
    cin>>n;

    int data;
    cin>>data;

    node* head = new node(data);
    node* temp = head;


    for (int i = 0; i < n-1; i++)
    {
        cin>>data;
        temp->next= new node(data);
        temp= temp->next;
    }


    deletion(head);
    display(head);
    


    

    
}