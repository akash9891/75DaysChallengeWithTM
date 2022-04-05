class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> mp;
        mp[0]++;
        int sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem=sum-k;
            ans+=mp[rem];
            mp[sum]++;
        }
        
        return ans;
    }
};