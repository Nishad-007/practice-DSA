#include<iostream>

using namespace std;

void printSum(int arr[][4],int i,int j){
    for(int i=0;i<3;i++){
        int count =0;
        for (int j = 0; j < 4; j++)
        {
            count+=arr[i][j]; 
        }cout<<count<<endl;
    }
}



int main(){

    int arr[3][4];

    //input array
    // taking input rowise
    for(int i =0;i<3;i++){
        for (int j = 0; j < 4; j++)
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

    printSum(arr,3,4);

    return 0;
}