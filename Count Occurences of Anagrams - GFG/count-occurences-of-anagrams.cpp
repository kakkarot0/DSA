//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int>mp;
	    int ans=0;
	    int k=pat.size();
	    int n=txt.size();
	    int i=0,j=0;
	    for(int i=0;i<k;i++){
	        mp[pat[i]]++;
	    }
	    int count=mp.size();
	    while(j<n){
	        char x=txt[j];
	        if(mp.find(x)!=mp.end()){
	            mp[x]--;
	           if(mp[txt[j]]==0)count--;
	        }
	        if(j-i+1<k)j++;
	        else if(j-i+1==k){
	            if(count==0){
	                ans++;
	            }
	            if(mp.find(txt[i])!=mp.end()){
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1)count++;
	            }
	            i++;
	            j++;
	            
	        }
	    }
	        return ans;
	}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends