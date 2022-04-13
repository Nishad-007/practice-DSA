#include <iostream>
using namespace std;

int main() {
	//how to implement a 2D array.
	int a[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    int i,j;

    for (int i = 0; i < 3; i++)
    {
        /*column*/for (int j = 0; j< 4; j++)
        {
            /*row */cout<<a[i][j];
        }
        cout<<endl;
        
    }
    
    
	return 0;
}
