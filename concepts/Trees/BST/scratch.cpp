#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int Add(int *a, int *b){
   
   int c = *a + *b;
   cout<< &a <<endl;
   cout<< a <<endl;
   cout<<*a<<endl;

   return c;
};


int main (){
    int a=4, b=5;
    
    int c = Add(&a , &b);
    cout<<&a<<endl;

    cout<<c<<endl;

}