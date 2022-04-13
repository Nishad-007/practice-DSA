#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

//at the END
/*int main(){
    int arr[6],i,elem;
    cout<<"Enter 5 array elements:"<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the new element"<<endl;
    cin>>elem;
    arr[i]=elem;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
    
}*/

//at any POSITION

int main()
{
    int arr[50], i, elem, pos, tot;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=tot; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    tot++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}