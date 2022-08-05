#include <iostream>
using namespace std;

void pattern1(int &count){
   for (int row = 1; row <= count; row++)
   {
     for(int column =1;column<=row;column++){
        cout<<"*"<<" ";
     }
     cout<<endl;
   }

    // * 
    // * *
    // * * *
    // * * * * 

}

void pattern2(int &count){
   for (int row = 1; row <= count; row++)
   {
     for(int column =count;column>=row;column--){
        cout<<"*"<<" ";
     }
     cout<<endl;
   }

    // * * * * 
    // * * *
    // * *
    // *

}

void pattern9(int &count){ 
   for (int row = 1; row <=count; row++)
   {
     for (int column = 1; column <= count; column++)
     {
      if (column<=count-row)
      {
        cout<<" ";
      }
      else{
         cout<<"*";
      }
      
     }
     
     cout<<endl;
   }

      //      *
      //     **
      //    ***
      //   ****
      //  *****
      // ******

}

void pattern10(int &count){ 
   for (int row = 1; row <=count; row++)
   {
     for (int column = 1; column <= row; column++)
     {
      cout<<column<<" ";
      
     }
     
     cout<<endl;
   }
   // for COLUMN
      // 1 
      // 1 2
      // 1 2 3
      // 1 2 3 4
      // 1 2 3 4 5  

    // for ROW 
      // 1
      // 2 2
      // 3 3 3
      // 4 4 4 4
      // 5 5 5 5 5

}

void pattern11(int &count){ 
   for (int row = 1; row <=count; row++)
   {
     for (int column = 1; column <= row; column++)
     {
      cout<<"*";
      
     }
     int space = 2*count-2*row;

     for(int column =1;column<=space;column++){
      cout<<" ";
     }
     for (int column = 1; column <=row; column++)
     {
      cout<<"*";
     }
     cout<<endl;
   }

   for (int row=count-1; row >=1; row--)
   {
     for (int column = 1; column <= row; column++)
     {
      cout<<"*";
      
     }
     int space = 2*count-2*row;

     for(int column =1;column<=space;column++){
      cout<<" ";
     }
     for (int column = 1; column <=row; column++)
     {
      cout<<"*";
     }
     cout<<endl;
   }


   // *        *
   // **      **
   // ***    ***
   // ****  ****
   // **********
   // **********
   // ****  ****
   // ***    ***
   // **      **
   // *        *

}

void pattern12(int &count){ 
   for (int row = 1; row <=count; row++)
   {
     for (int column = 1; column <= row; column++)
     {
      if ((row+column)%2==0)
      {
         cout<<"1"<<" ";
      }else
      {
         cout<<"0"<<" ";
      }

      
     }
     
     cout<<endl;
   }


   // 1 
   // 0 1
   // 1 0 1
   // 0 1 0 1
   // 1 0 1 0 1   


}

void pattern13(int &count){ 
   for (int row = 1; row <=count; row++)
   {
     for (int column = 1; column <= count-row; column++)
     {
      cout<<" ";
     }

   for (int column = 1; column <= count; column++)
      {
         cout<<"*";
      }  
     
     cout<<endl;
   }

      //      ******
      //     ******
      //    ******
      //   ******
      //  ******
      // ******

}

void pattern14(int &count){

   for (int row = 1; row <= count; row++)
   {
      for (int column = 1; column <= count-row; column++)
      {
         cout<<" ";
      }
      for (int column = 1; column <=row; column++)
      {
         cout<<column<<" ";
      }
      cout<<endl;
      
   }
      // for ROW
      //      1
      //     2 2
      //    3 3 3
      //   4 4 4 4
      //  5 5 5 5 5
      // 6 6 6 6 6 6

      // for COLUMN
      //      1 
      //     1 2
      //    1 2 3
      //   1 2 3 4
      //  1 2 3 4 5
      // 1 2 3 4 5 6

   
}

void pattern15(int &n){

   for (int i = 0; i < n; i++)
   {
      int count1 = i + 1;
      int count2 = 2;
      for (int j = 0; j < n - i; j++)
      {
         printf("   ");
      }
      for (int k = 0; k < (2 * i) + 1; k++)
      {
         if (count1 >= 1)
         {
               printf(" %d ", count1);
         }
         else
         {
               printf(" %d ", count2);
               count2++;
         }
         count1--;
      }
      printf("\n");
   }

   //                 1 
   //              2  1  2
   //           3  2  1  2  3
   //        4  3  2  1  2  3  4
   //     5  4  3  2  1  2  3  4  5
   //  6  5  4  3  2  1  2  3  4  5  6

   
}

void pattern16(int &count){

   for (int row = 1; row <= count; row++)
   {
      for (int column = 1; column <= count-row; column++)
      {
         cout<<" ";
      }
      for (int  column = 1; column <= row; column++)
      {
         cout<<"*"<<" ";
      }
      cout<<endl;
      
   }
   for (int row = count; row >= 1; row--)
   {
      for (int column = 1; column <= count-row; column++)
      {
         cout<<" ";
      }
      for (int  column = 1; column <= row; column++)
      {
         cout<<"*"<<" ";
      }
      cout<<endl;
      
   }

   //     * 
   //    * *
   //  * * * *
   // * * * * *
   // * * * * *
   //  * * * *
   //   * * *
   //    * *
   //     *
}


void pattern17(int &count){
   for (int  row = 1; row <= 3; row++)
   {
      for (int  column = 1; column <= count; column++)
      {
         if ((row+column)%4==0 ||(row==2 && column%4==0))
         {
            cout<<"*";
         }
         else{
            cout<<" ";
         }
      }
      cout<<endl;
      
      
      
   }

//   *   *
//  * * * *
// *   *   *
   
}



void floydtriangle(int &count){ 
   int rep =1;
   for (int row = 1; row <=count; row++)
   {
     for (int column = 1; column <= row; column++)
     {
      cout<<rep<<" ";
      rep++;
     }
     
     cout<<endl;
   }
   // 1 
   // 2 3
   // 4 5 6
   // 7 8 9 10
   // 11 12 13 14 15

}

void pattern3(int &count){
   for (int row = 1; row <= count; row++)
   {
     for(int column =1;column<=count;column++){
        cout<<"*"<<" ";
     }
     cout<<endl;
   }

    // * * * * * * 
    // * * * * * *
    // * * * * * *
    // * * * * * *
    // * * * * * *
    // * * * * * *

}

void pattern4(int &count){ // still not attained
   for (int row = 1; row <= count; row++)
   {
     for(int column =1;column<=count-row;column++){
        cout<<" ";
     }
     cout<<"*"<<endl;;
   }

//      *
//     *
//    *
//   *
//  *

}



void pattern5(int &count){
   for (int row = 1; row <= count; row++)
   {
     for(int column =1;column<=count-row;column++){
        cout<<" ";
     }
     cout<<"*"<<endl;;
   }

//      *
//     *
//    *
//   *
//  *

}

void pattern6(int &count){
   for (int row = 1; row <= count; row++)
   {
     for(int column =1;column<=row;column++){
        cout<<" ";
     }
     cout<<"*"<<endl;;
   }

//  *
//   *
//    *
//     *
//      *
//       *

}

void pattern7(int &count){ /// cant figure out
   for (int row = 1; row < 2*count; row++)
   {
     if(row>count){
        cout<<2*count-row<<endl;
     }else{
        cout<<row<<endl;
     }
       
     for(int column =1;column<=row;column++){
        cout<<"* ";
     }
     cout<<endl;;
   }

    // * 
    // * *
    // * * *
    // * * * * 
    // * * *
    // * *
    // *

}

void pattern8(int &count){ 
   for (int row = 1; row <=count; row++)
   {
     for (int column = 1; column <= count; column++)
     {
      if (row == 1||row == count|| column == 1 || column == count)
      {
        cout<<"*";
      }
      else{
         cout<<" ";
      }
      
     }
     
     cout<<endl;
   }

      // ******
      // *    *
      // *    *
      // *    *
      // *    *
      // ******

}


int main()
{

    int count;
    cin >> count;

    // pattern1(count);
    // pattern2(count);
    // pattern3(count);
    // pattern4(count);
    // pattern5(count);
    // pattern6(count);
    // pattern7(count);
   //  pattern8(count);
   // pattern9(count);
   // pattern10(count);
   // floydtriangle(count);
   // pattern11(count);
   // pattern12(count);
   // pattern13(count);
   // pattern14(count);
   // pattern15(count);
   // pattern16(count);
   pattern17(count);

    return 0;
}
