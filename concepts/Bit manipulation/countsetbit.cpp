#include<iostream>

using namespace std;

int main(){


    int x;
    cout<<"enter the number:"<<" ";
    cin>>x;
    int count=0;

    while (x)
    {
       
            int bit  = x&1;
            if(bit){
                count++;
            }
            
            x=x>>1;

    }

    cout<<count<<endl;
    
}