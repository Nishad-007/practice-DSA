#include<iostream>
using namespace std;


char tolowercase(char ch){

    if(ch>='a' && ch<= 'z'){
        return ch;
    }
    else{
        char temp = ch+32;
        return temp;
    }


}

bool palindrome(char arr[], int n){
    int i = 0;
    int j = n-1;

    while (i<=j)
    {
        if(tolowercase(arr[i])!=tolowercase(arr[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
    
}

int getlen(char arr[]){

    int count=0;
    for (int i = 0;arr[i] !='\0'; i++)
    {
        count++;
    }
    return count;
    
}




int main(){

    char arr[20];
    cin>>arr;

    int len = getlen(arr);
    cout<<len<<endl;

    cout<<palindrome(arr,len)<<endl;

    return 0;

}

