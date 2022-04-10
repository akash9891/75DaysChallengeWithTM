class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int> ze;
        for(int i=0;i<n;i++)
            if(nums[i]==0)
                ze.push_back(i);
        if(nums[n-1]==0)
            ze.pop_back();
        int curr=0;
        if(n==1)
            return true;
        for(int i=0;i<n && curr<ze.size();i++)
        {
            if(i>=ze[curr])
                return false;
            if(nums[i]+i>ze[curr])
            {
                curr++;
                i--;
            }
        }
        if(curr==ze.size())
            return true;
        return false;
        
    }
};