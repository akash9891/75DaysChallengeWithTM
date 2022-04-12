class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                z++;
            else if(nums[i]==1)
                o++;
            else
                t++;
        }
        int ind=0;
        while(z>0)
        {
            nums[ind]=0;
            z--;
            ind++;
        }
        while(o>0)
        {
            nums[ind]=1;
            o--;
            ind++;
        }
        while(t>0)
        {
            nums[ind]=2;
            t--;
            ind++;
        }
        
    }
};