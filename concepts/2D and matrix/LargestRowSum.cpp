#include<iostream>

using namespace std;

void largestSum(int arr[][4], int i ,int j){
    int maxi =0;
    int rowIndex =-1;

    for(int i=0;i<3;i++){
        int count =0;
        for (int j = 0; j < 4; j++)
        {
            count+=arr[i][j]; 
        }
        if(maxi<count){
            maxi = count;
            rowIndex = i;
        }
    }
    cout<<rowIndex<<endl;
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

    largestSum(arr,3,4);

    return 0;
}