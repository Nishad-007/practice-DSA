
#include <iostream>
#include <string>
using namespace std;
int main() {
   
   int n;
   cin >> n;

    // int num[];
    string num ="";

    for (int i = 0; i < n; i++)
    {
        num.push_back(i);
    }
    cout<<num[n-1]<<"\n";


   
    return 0;
}