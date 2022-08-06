#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int> &st, int count , int size){
    if (count<size/2)
    {
        st.pop();
        return;
    }

    int num = st.top();
    st.pop();
    solve(st, count+1, size); 

    st.push(num); 
}

void deleteMiddle(stack<int> &st, int count , int N){
    solve(st, count , N);
}

void printstack(stack<int> &st){
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
 

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    printstack(st);
    deleteMiddle(st, 0 , 5);
    printstack(st);

    
    
    
    


}