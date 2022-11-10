class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(auto i: s){
           if(!s.empty()&&ans.back()==i)
               ans.pop_back();
            else ans.push_back(i);
        }
        return ans;
    }
};