//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int temp, m,sum=0, flag=0;
    	for(int i=0; i<n; i++)
    	{
    	    m = a[i];
    	    temp = a[i];
    	    while(m>0)
    	    {
    	        int r = m%10;
    	        sum = (sum*10)+r;
    	        m = m/10;
    	    }
    	   
    	    
    	    if(temp==sum)
    	    {
    	        flag = 1;
    	        sum =0;
    	    }
    	    else
    	        flag = 0;
    	}
    	return flag;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends