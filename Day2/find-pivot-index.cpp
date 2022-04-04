class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=0;
        for(int i=1;i<n;i++)
            right+=nums[i];
        int ans=-1;
        for(int i=0;i<n-1;i++)
        {
            if(left==right)
            {
                ans=i;
                break;
            }
            left+=nums[i];
            right-=nums[i+1];
        }
        if(left==right && ans==-1)
            ans=n-1;
        
        return ans;
    }
};