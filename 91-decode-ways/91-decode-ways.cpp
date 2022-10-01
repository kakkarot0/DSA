class Solution {
public:
    vector<int>dp;
    int numDecodings(string s) {
        dp.assign(s.size(),-1);
        return nways(0,s);
    }
    int nways(int i,string s){
      if(i>=s.size())return 1;
        else if(s[i]=='0') return 0;
      else if(i==s.size()-1)return 1;
        else if (dp[i] != -1)
            return dp[i];
      
        else if(s[i]=='1'||(s[i]=='2' && (s[i+1]>='0'&&s[i+1]<='6'))){
            return dp[i] = nways(i+1,s)+nways(i+2,s);
        }
        else return dp[i] = nways(i+1,s);
         
    
    }
};