#include<iostream>
#include<stack>
using namespace std;


void insertAtbottom(stack<int> &st, int ele){
    
    if(st.empty()){
        st.push(ele);
        return;
    }
    
    int topele = st.top();
    st.pop();
    insertAtbottom(st,ele);

    st.push(topele);
}


void reverse(stack<int> &st){

    if(st.empty()){
        return;
    }

    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtbottom(st,ele);
}

void printStack(stack<int> &st){
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    printStack(st);
    reverse(st);
    printStack(st);

   
    



}