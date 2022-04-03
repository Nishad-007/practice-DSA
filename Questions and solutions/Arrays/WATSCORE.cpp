#include<stdio.h>
#include<iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    {
	        int p[n],s[n],sum=0;
	        for(int i=0;i<n;i++)
	        {
	            cin>>p[i];
	            cin>>s[i];
	        }
	     for(int i=0;i<n;i++)
	     {
	         for(int j=i+1;j<n;j++)
	         {
	             if(p[i]==p[j])
	             {
	               if(s[i]<s[j])
	               {
	                   s[i]=0;
	               }
	               else
	               {
	                   s[j]=0;
	               }
	             }
	         }
	     }
	      for(int i=0;i<n;i++)
	        {
	          if(p[i]<9)
	          {
	              sum=sum+s[i];
	          }
	        }
	       cout<<sum<<"\n";
	       
	    }
	    
	    
	}
	return 0;
}