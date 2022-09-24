class Solution {
public:
    string reverseWords(string s) {
        int last=-1;
        for(int i=0;i<=s.length();++i){
            // <= we considerd this because of the end=i-1 so it give last end of string
          if(i==s.length()||s[i]==' '){
             int start=last+1;
              int end=i-1;
              while(start<end){
                 swap(s[start++],s[end--]);
              }
              last=i;
          }
        }
        return s;
    }
};