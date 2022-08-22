#include<iostream>

using namespace std;

int fibonnaci(int i ){

    if( i==0 || i==1) return i;

   
    return  (fibonnaci(i-1) + fibonnaci(i-2));
}

int main(){

    int x , i=0;
   cout << "number: ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << fibonnaci(i) << " ";
      i++;
   }
   return 0;

}
