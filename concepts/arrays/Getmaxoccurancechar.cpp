#include <iostream>
#include<map>
using namespace std;
 
void get2NonRepeatingNos(string s, int n)
{
 
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        m[s[i]]++;
    }
 
    cout << "The most repeating element is: ";
    int maxi = -1;
    for (auto& x : m) {
        
        if (maxi < x.second) {
            maxi = x.first;
        }
    }
    cout<<(char)maxi<<endl;
}


int main()
{
    string s;
    cin>>s;

    int n = s.length();
    get2NonRepeatingNos(s, n);
}

