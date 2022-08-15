// Problem Code:EQUALISE (from codechef)


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

typedef long double ld;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
 
    int t;
    cin>>t;
 
    while(t--)
    {
        int a , b;
        cin>>a>>b;
        
        
        if(a==b){
            cout<<"YES"<<endl;
        }
        else if(a>b && a%b==0){
            int div = a/b;
            if((div & (div-1)) == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else if(b>a && b%a==0){
            int div = b/a;
            if((div & (div-1)) == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else{
             cout<<"NO"<<endl;
        }
   
    }
 
    return 0;
}

