//Count number of bits to be flipped to convert A to B

#include <iostream>
using namespace std;

void flippedbits(int &a, int&b){

    int XOR = a^b;
    int count =0;

    while (XOR)
    {   
        int bit =XOR&1;
        if(bit){
            count++;
            
        }
        XOR=XOR>>1;
    }

    cout<<count<<endl;
    
}

int main(){
    int a;int b;
    cin>>a>>b;

    flippedbits(a,b);
}