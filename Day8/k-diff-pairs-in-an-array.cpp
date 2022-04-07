class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        int cnt=0;
        for(auto i:mp)
        {
            int a=i.first-k;
            if(a==i.first)
            {
                if(i.second>1)
                    cnt++;
            }
            else if(mp.find(a)!=mp.end())
                cnt++;
        }
        return cnt;
    }
};