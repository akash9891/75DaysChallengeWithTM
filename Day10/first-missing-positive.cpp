class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec(n+2,0);
        for(int i=0;i<n;i++)
            if(nums[i]<=n && nums[i]>0)
                vec[nums[i]]=1;
        for(int i=1;i<=n+1;i++)
            if(vec[i]==0)
                return i;
        return n+1;
    }
};