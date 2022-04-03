#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b,sum,matchsum;
	    cin>>a>>b;
	    sum=a+b;
	    int arr[10]={6,2,5,5,4,5,6,3,7,6};
	    matchsum=0;
	    
	    while(sum!=0){
	        int digit=sum%10;
	        matchsum+=arr[digit];
	        sum=sum/10;
	    }
	    
	    cout<<matchsum<<endl;
	}
	return 0;
}
