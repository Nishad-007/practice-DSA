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

void insertatHead(node* &head, int val){
    
    node* n = new node(val);
    n->next= head;
    head=n;
}

void insertattail(node* &head, int val){
    if (head ==NULL)
    {
        return;
    }

    node* n = new node(val);

    node* temp = head;

    while (temp->next != NULL)  
    {
        temp = temp->next;
    }
    temp->next = n;
    
}

int getlen(node* &head){

    int len=1;

    node* temp = head;

    while (temp->next !=NULL)
    {
        temp=temp->next;
        len++;
    }

    return len;
    
}

// approach 1 = traversing 2 times.
// void findmiddle(node* &head){
//     int mid = getlen(head)/2;

//     node* temp = head;
    

//     while (mid--)
//     {
//         temp = temp->next;     
//     }

//     cout<<temp->data<<endl;
    

// }


//Approach -2 : 2 pointers
int findmiddle(node* &head){

    node* slowptr = head;
    node* fastptr = head;

    if (head!=NULL)
    {
        while (fastptr!=NULL && fastptr->next != NULL)
        {
            fastptr=fastptr->next->next;
            slowptr=slowptr->next;

        }
        
        
    }
    
    return slowptr->data;
}

void deletion(node* &head){
    
    node* temp = head;
    node* todelete;
    
    int value = findmiddle(head);
    
    while (temp->next->data!=value)
    {
        temp=temp->next;
    }

    temp->next= temp->next->next;
    
    delete todelete;
    

}

void display(node* &head){
    node* temp = head;

    while (temp!= NULL)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<< endl;
    
}

int main(){
    node* head = NULL;

    insertatHead(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    insertattail(head,7);
    // getlen(head);
    cout<<findmiddle(head)<<endl;
    deletion(head);
    display(head);



}
