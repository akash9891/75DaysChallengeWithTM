class Solution {
public:
    
    void func(vector<int> arr,int target,int idx,int sum,vector<int> ans, vector<vector<int>> &anss)
    {
        if(sum>target)
            return;
        if(sum==target)
        {
            anss.push_back(ans);
            return;
        }
        if(idx==arr.size())
            return;
        for(int i=idx;i<arr.size();i++)
        {
            ans.push_back(arr[i]);
            func(arr,target,i,sum+arr[i],ans,anss);
            ans.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> ans;
        vector<vector<int>> anss;
        func(candidates,target,0,0,ans,anss);
        return anss;
    }
};