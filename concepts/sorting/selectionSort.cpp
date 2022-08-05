// The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) 
// -from unsorted part and putting it at the beginning. 

// The complexity of Selection Sort Technique
// Time Complexity: O(n2)

// Space Complexity: O(1)



#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

   int n;
   cin>>n;
   
   //this is a working code, but as you can see the conmpiler doesnt allow dynamic size arrays i.e only constant sized arrays.Run this code in online compiler.
   int arr[n];

   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }


   for (int i = 0; i < n-1; i++)
   {
       for (int j = i+1; j < n; i++)
       {
          if(arr[j]<arr[i]){
              int temp =arr[j];
              arr[j]=arr[i];
              arr[i]=temp;
          }
       } 
   }
   
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
 
}