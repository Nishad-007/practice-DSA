#include <iostream>
#include<vector>
using namespace std;
 

vector<int> get2NonRepeatingNos(vector<int> &num)
{

    vector<int> ans;
    int Xor = num[0];
    int n = num.size();
    int set_bit_no;
    int x,y;
    x=y=0;

    for (int i = 1; i < n; i++)
        Xor ^= num[i];
 
    set_bit_no = Xor & ~(Xor - 1);
 

    for (int i = 0; i < n; i++) {
 

        if (num[i] & set_bit_no)
            x = x ^ num[i];

        else {
            y = y ^ num[i];
        }
    }
    ans.push_back(x);
    ans.push_back(y);
    return ans;
}
 

int main()
{
    vector<int> num{ 1,2,3,4,5,6,1,2,3,4,5,7};

    vector<int> p = get2NonRepeatingNos(num);
    for(auto v:p){
        cout<<v<<" ";
    }
    
    // cout << "The non-repeating elements are " << x<< " and " << y;
}