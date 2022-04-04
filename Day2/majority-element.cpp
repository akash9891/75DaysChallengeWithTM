class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int majr=nums.size()/2 + 1;
        for(auto i:mp)
        {
            if(i.second>=majr)
                return i.first;
        }
        return -1;
    }
};