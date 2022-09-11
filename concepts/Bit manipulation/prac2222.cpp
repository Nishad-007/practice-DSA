#include <iostream>
using namespace std;

void func(int i, int *j, int &k){

  i=i+10;
  *j = *j * *j;
  k = k*k*k;
}

int main() {
    int a =5; int b =2 ; int c =4;

    func(a, &b, c);

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}
