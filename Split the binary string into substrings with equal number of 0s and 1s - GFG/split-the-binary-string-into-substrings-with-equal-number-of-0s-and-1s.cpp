//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int count=0;
        int n=str.size();
        int zero=0;
        int ones=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0')zero++;
            if(str[i]=='1')ones++;
            if(zero==ones){
                count++;
                zero++;
                ones++;
            }
        }
        if (zero != ones) {
        return -1;
        } else {
        return count;
        }
    }
            
    
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends