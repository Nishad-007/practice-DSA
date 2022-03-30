#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int k,n,counter=0;
        cin>>n>>k;
        
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
            if(h[i]>k){
                counter+=1;
            }
        }
        cout<<counter<<endl;
    }
    
    return 0;
}