class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n-1;i++)
        {
            int p1=i-1,p2=i+1;
            while(p1>=0 && p2<n)
            {
                int sum=nums[i]+nums[p1]+nums[p2];
                if(sum==0)
                {
                    ans.insert({nums[i],nums[p1],nums[p2]});
                    p1--,p2++;
                }
                else if(sum>0)
                {
                    p1--;
                }
                else
                {
                    p2++;
                }
            }
        }
        vector<vector<int>> aa;
        for(auto i:ans)
        {
            aa.push_back(i);
        }
        return aa;
    }
};