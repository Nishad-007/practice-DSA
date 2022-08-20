#include<iostream>

using namespace std;

int ncount(int n ){
    if( n<=1 ) return n;

    int ans = ncount(n-1) +ncount(n-2);

    return ans;

}

int main(){
    int n;
    cin>>n;
    int x =1;
    // while (x<n)
    // {
        
    //     cout<<ncount(x)<<" ";
    //     x++;
    // }
    cout<<ncount(n)<<" ";
    return 0;
}

    
