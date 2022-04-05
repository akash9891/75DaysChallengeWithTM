class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int flag=0;
        for(int i=n-1; i>0; i--)
        {
            if(nums[i]>nums[i-1])
            {
                for(int j=n-1; j>=i; j--)
                {
                    if(nums[j]>nums[i-1])
                    {
                        swap(nums[j],nums[i-1]);
                        break;
                    }
                }  
                sort(nums.begin()+i,nums.end());
                flag=1;
                break;
            }
        }
        
        if(flag==0)
            sort(nums.begin(), nums.end());  
    }
};