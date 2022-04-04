class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        vector<pair<int,int>> vp(n);
        
        for(int i=0; i<n; i++)
            vp[i]={nums[i],i};
        
        sort(vp.begin(), vp.end());
        int start=0, end=n-1;
        
        vector<int> ans;
        while(start<end)
        {
            int tsum = vp[start].first + vp[end].first;     
            if(tsum==target)
            {
                ans.push_back(vp[start].second);
                ans.push_back(vp[end].second);
                break;
            }
            
            if(tsum>target)
                end--;
            else
                start++;
        }
        
        return ans;
        
    }
};