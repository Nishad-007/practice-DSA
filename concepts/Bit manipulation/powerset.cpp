// Power Set | Bit Manipulation
#include<cmath>
#include<iostream>
#include<vector>
using namespace std;

void powerset(string s){

    vector<string> ans;
    
    int n = pow(2,s.length());
    for (int i = 1; i < n; i++)
    {
        int x =i;
        int j=0;
        string c= "";
        while (x)
        {
            if(x&1){
                c=c+s[j];
            }
            j++;
            x = x>>1;
        }
        ans.push_back(c);        
    }

    for (auto v:ans)
    {
        cout<<v<<" ";
    }cout<<endl;
    

}

int main(){
    string s;
    cin>>s;

    powerset(s);

}