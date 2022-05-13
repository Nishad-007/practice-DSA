#include <iostream>
using namespace std;


struct node
{
    int data;
    node* next;
};

class LLtraversal
{
    private:
        node* head;
    public:
        LLtraversal(){
            head= NULL;
        };

        void pushback(int newelement){
            node* newnode = new node();
            newnode->data= newelement;
            newnode->next=NULL;
            if(head == NULL){
                head= newnode;
            }else
            {
                node* temp = head;
                while (temp->next!=NULL)
                {
                    temp = temp->next;
                }
                temp->next=newnode;   
            }  
        }

        //printlist

        void printlist(){
            node* temp = head;
            if(temp!=NULL){
                cout<<"the list contains:";
                while (temp != NULL)
                {
                    cout<<temp->data<<" ";
                    temp = temp->next;
                }
                cout<<endl;
            }else
            {
                cout<<"the list is empty.\n";
            }
            
        }
   
};

int main() {
  LLtraversal MyList;

  //Add three elements at the end of the list.
  MyList.pushback(1);
  MyList.pushback(2);
  MyList.pushback(0);

  //traverse to display the content of the list.
  MyList.printlist();
  
  return 0; 
}
