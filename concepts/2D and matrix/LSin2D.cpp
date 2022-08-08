#include<iostream>

using namespace std;

// time Complexitiy: o(m*n)

bool isPresent(int arr[][4], int target,int i,int j){
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j] == target){
                return 1;
            }  
        }
    }
    return 0;
}

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

    // print the array
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    int target;
    cout<<"enter the element to search: "<<endl;
    cin>>target;

    if(isPresent(arr, target, 3, 4)){
        cout<<" element found"<<endl;
    }else
    {
        cout<<"element not found"<<endl;
    }

    

    return 0;
}