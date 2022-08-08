#include<iostream>

using namespace std;

int main(){

    //create a 2d array
    int arr[3][4];

    //input array
    // taking input rowise
    for(int i =0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    // taking input column wise
    for(int j =0;j<4;j++){
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i][j];
        }
        
    }



    // print the array
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    // 1 2 3 4 
    // 5 6 7 8 
    // 9 10 11 12 

    return 0;
}