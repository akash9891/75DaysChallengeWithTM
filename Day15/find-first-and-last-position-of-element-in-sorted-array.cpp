class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0, end=n-1;
        vector<int> ans(2,-1);
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                if(mid==0 || nums[mid-1]!=target)
                {
                    ans[0]=mid;
                    break;
                }
                end=mid-1;
            }
            else if(target>nums[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        start=0,end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                if(mid==n-1 || nums[mid+1]!=target)
                {
                    ans[1]=mid;
                    break;
                }
                start=mid+1;
            }
            else if(target>nums[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        return ans;
    }
};