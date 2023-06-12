//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        stack<char> st;
    int count = 0;

    for (auto c : str) {
        if (!st.empty() && st.top() != c) {
            st.pop();
        } else {
            st.push(c);
        }

        if (st.empty()) {
            count++;
        }
    }

    if (st.empty()) {
        return count;
    } else {
        return -1;
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