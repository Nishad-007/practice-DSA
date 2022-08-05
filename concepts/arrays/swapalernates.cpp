#include<iostream>
using namespace std;

void swap(int arr[], int size ){

    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}

void print(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";  

    }
    cout<<endl;
    
}

int main(){

    int odd[5] = {1,2,3,4,5};

    int even[6] = {1,2,3,4,5,6};


    swap(odd,5);
    print(odd,5);

}