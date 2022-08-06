#include <iostream>
#include <stack>

using namespace std;

bool parenthesisMatching(string expression){
    stack<char> st;
    for (int i = 0; i < expression.length(); i++)
    {

        char ch = expression[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if(ch == ')' || ch == '}' ||ch == ']'){
                    st.pop();
                }else
                    {
                        return false;
                    } 
            }else
            {
                return false;
            }   
        }   
    }
    if (st.empty())
    {
       return true;
    }else{
        return false;
    }
}

int main(){ 

    string expression = "({[]})";
    cout<<parenthesisMatching(expression);
      
}