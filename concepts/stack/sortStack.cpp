#include<iostream>
#include<stack>
using namespace std;


void sortedInsert(stack<int> &stack, int num){
    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {
        stack.push(num);
    }

    int n = stack.top();

    sortedInsert(stack,num);

    stack.push(n);
}

void sortStack(stack<int> &stack){

    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    
    sortStack(stack);
    sortedInsert(stack,num);

}

void printStack(stack<int> &stack){
    while (!stack.empty())
    {
        cout<<stack.top()<<" ";
        stack.pop();
    }
}

int main(){

    stack<int> stack;

    stack.push(1);
    stack.push(6);
    stack.push(2);
    stack.push(4);
    printStack(stack);
    sortStack(stack);
    printStack(stack);

}
