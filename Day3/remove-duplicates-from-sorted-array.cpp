class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int ptr=-1;
        int num=500;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num)
            {
                num=nums[i];
                nums[i]=500;
            }
            else
            {
                num=nums[i];
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]<500 && ptr>-1)
            {
                nums[ptr]=nums[i];
                ptr++;
            }
            else if(nums[i]==500 && ptr==-1)
            {
                ptr=i;    
            }
        }
        
        if(ptr==-1)
            ptr=n;
        
        return ptr;
    }
};