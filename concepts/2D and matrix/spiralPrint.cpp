#include<iostream>
#include<vector>

using namespace std;

vector<int> spiralPrint(vector<vector<int>> &matrix){

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0 ;
    int total = row*col;

    //index initialization 
    int startingRow = 0;
    int startingCol = 0;

    int endingRow = row-1;
    int endingCol = col-1;

    while (count < total)   
    {
        //print starting row
        for (int index = startingCol;count < total && index <=endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //print ending column
        for (int index = startingRow;count < total && index <=endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //print ending row
        for (int index = endingCol;count < total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        
        //print starting column
        for (int index = 0;count < total && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;  
    }   


    return ans;

}

int main(){
    vector<vector<int>> matrix;

    //input array
    // taking input rowise
    for(int i =0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cin>>matrix[i][j];
        }
        
    }

    // print the array
    for(int i=0;i<3;i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;       
    }

    spiralPrint(matrix);

    return 0;
}