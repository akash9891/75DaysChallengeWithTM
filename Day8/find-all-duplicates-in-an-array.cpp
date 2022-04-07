class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> tmp(100001,0);
        vector<int> result;
        for(int i:nums){
            tmp[i]+=i;
            if(tmp[i] == 2*i) result.push_back(i);
        }
 return result;
        
    }
};