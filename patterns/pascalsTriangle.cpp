#include <iostream>

using namespace std;

void pascal(int &n){
    for (int i = 0; i < n; i++)
    {
    int num =1;
    for (int k = 0; k < n-i-1; k++)
    {
        cout<<" ";
    }
    
    for (int j = 0; j <= i; j++)
    {
        cout<<num<<" ";
        num = num*(i-j)/(j+1);
    }

    cout<<endl;
    
    }
}

    //     1 
    //    1 1
    //   1 2 1
    //  1 3 3 1
    // 1 4 6 4 1

int main(){
    int n =5;
    pascal(n);




    return 0;
}