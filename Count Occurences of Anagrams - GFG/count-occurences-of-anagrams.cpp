//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    
    int m = txt.size();
    int n = pat.size();
    if (n > m)
        return 0;
    unordered_map<char, int> stxt, spat;
    int count = 0;

    for (int i = 0; i < n; i++) {
        spat[pat[i]]++;  // Count the frequency of characters in the pattern
        stxt[txt[i]]++;  // Count the frequency of characters in the initial substring of the text
    }

    if (spat == stxt)
        count++;  // If the frequencies of characters match, it's an anagram

    for (int i = n; i < m; i++) {
        stxt[txt[i]]++;  // Increase the frequency of the current character in the sliding window
        stxt[txt[i - n]]--;  // Decrease the frequency of the character going out of the sliding window

        if (stxt[txt[i - n]] == 0)
            stxt.erase(txt[i - n]);  // Remove the character from the map if its frequency becomes zero

        if (spat == stxt)
            count++;  // If the frequencies of characters match, it's an anagram
    }

    return count;


	    // code here
	   //int m=txt.size();
	   //int n=pat.size();
	   //if(n>m)return 0;
	   //unordered_map<char,int>stxt,spat;
	   //int count=0;
	   //for(int i=0;i<n;i++){
	   //    spat[pat[i]]++;
	   //}
	   //for(int i=0;i<n;i++){
	   //    stxt[txt[i]]++;
	   //}
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