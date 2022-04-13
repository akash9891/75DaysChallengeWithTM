class Solution {
public:
    
    int atmostk(vector<int>& nums, int k)
    {
        int n=nums.size();
        int start=0, end=0;
        int ans=0,op=0;
        map<int,int> mp;
        while(end<n)
        {
            if(mp[nums[end]]==0)
            {
                mp[nums[end]]++;   
                op++;
            }
            else
            {
                mp[nums[end]]++;
            }
            
            if(op==k)
            {
                ans+=end-start+1;
                end++;
                break;
            }
            ans+=end-start+1;
            end++;
        }
        
        while(end<n)
        {
            if(mp[nums[end]]==0)
            {
                while(mp[nums[start]]>0)
                {
                    mp[nums[start]]--;
                    if(mp[nums[start]]==0)
                    {   start++;
                        break;
                    }
                    start++;
                }
                mp[nums[end]]++;
                ans+=end-start+1;
            }
            else
            {
                mp[nums[end]]++;
                ans+=end-start+1;
            }
            end++;
        }
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        if(k==1)
            return atmostk(nums,k);
        int a=atmostk(nums,k);
        int b=atmostk(nums,k-1);
        int ans=a-b;
        return ans;
    }
};