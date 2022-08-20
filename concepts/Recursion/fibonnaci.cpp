#include<iostream>

using namespace std;

int fibonnaci(int i ){

    if( i==0 ) return 0;
    if( i==1 ) return 1;

   
    return  (fibonnaci(i-1) + fibonnaci(i-2));
}

int main(){

    int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << fibonnaci(i) << " ";
      i++;
   }
   return 0;

}
