class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0, end=n-1;
        int k;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
            if(mid>0 && nums[mid-1]>nums[mid])
            {
                k=mid-1;
                break;
            }
            if(mid<n-1 && nums[mid]>nums[mid+1])
            {
                k=mid;
                break;
            }
            
            if(nums[mid]<nums[n-1])
                end=mid-1;
            else
                start=mid+1;
        }
        
        if(target>nums[n-1])
            start=0,end=k;
        else
            start=k+1,end=n-1;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
            if(target>nums[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        
        return -1;
    }
};