#include <iostream>
#include <stack>

using namespace std;

// void solve(stack<int> &s, int x){

//     if(s.empty()){
//         s.push(x);
//         return;
//     }

//     int num = s.top();
//     s.pop();

//     solve(s, x);

//     s.push(num);



// }

// stack<int> pushAtBottom(stack<int> &s, int x){
//     solve(s,x);
//     return s;
// }


void pushAtBottom(stack<int> &s,int t)
{  
    if(s.empty())
        s.push(t); //If Stack empty,insert the element
    else
    {   int x = s.top();
        s.pop(); //Popping all elements
        pushAtBottom(s,t); //Inserting the given element
        s.push(x);  //Pushing all the popped elements
    }
}

// void print(stack<int> &s){
//     while (!s.empty())
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }cout<<endl;

// }

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
     
    // print(s);
    // while (!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }cout<<endl;
   
    
    pushAtBottom(s,5);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
    // print(s);

    return 0;

}