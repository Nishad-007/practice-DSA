// Bubble Sort is the simplest sorting algorithm 
// that works by repeatedly swapping the adjacent elements if they are in the wrong order.

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

   int counter=1;
   while (counter<n)
   {
       for (int i = 0; i < n-counter; i++)
        {
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
   }

   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

   
}