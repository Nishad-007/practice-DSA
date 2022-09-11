#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool sort(int arr[], int index, int &n){
	
	if(index == ( n-1)){
		return true;
	}

	return arr[index] < arr[index+1] && sort(arr, index+=1,n);
}

int main() {
	int arr[6] = {1,2,3,4,5,6};
	int index = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

	cout<<sort(arr, index, n);

	return 0;
}

