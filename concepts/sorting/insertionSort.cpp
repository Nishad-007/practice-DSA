// The array is searched sequentially and unsorted items are moved and inserted into the sorted sub-list (in the same array). 
// This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2), 
// where n is the number of items.


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
