#include<iostream>
#include<vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> &arr, int nRows, int mCols){

    vector<int> ans;
    
    for (int col = 0; col < mCols; col++)
    {
        if(col&1){

            for (int row = nRows-1 ; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
     
        }
        else{
            for(int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
            
        }
    }

    return ans;

}

int main(){

    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // for(int i =0;i<3;i++){
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // };

    vector<int> p = wavePrint(arr, 3, 3); 

    for(int i=0;i<p.size();i++){
       cout<<p[i]<<" ";
    }cout<<endl;

}



