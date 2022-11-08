class Solution {
public:
    void findCombination(int ind,int target,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
        if(target==0){
        ans.push_back(ds);
        return;}
        for(int i=ind;i<arr.size();i++){   //here we will check if the two adjacent elements are same or not if thry are equal we can skip them
            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>target)break;//here if arr[i] is bigger than target then we can break coz every number will be in increasing order
            ds.push_back(arr[i]);
            
            findCombination(i+1,target-arr[i],arr,ds,ans);
            ds.pop_back();
        }
    }
    public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());//sorting
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,candidates,ds,ans);
        return ans;
    }
};