// Program to find whether a number is the power of 2 
#include <iostream>
using namespace std;

void power(long long int &a){
    
    int andy = a&(a-1);

    if(andy == 0){

        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }

    // or you could just write like this
    // if(a == 0) return false;
    // if(a&(a-1)==0) return true;
    // return false;
    
    
    
}

int main(){

    long long int a;
    cin>>a;

    power(a);

}