class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        if(n<=1)return "";
        for(int i=0;i<n/2;++i){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
                // coz we need to replace exactly one character
            }
            
        }
        palindrome[n-1]='b';  //this case is for when the string is aaaaa
        return palindrome;
    }
};