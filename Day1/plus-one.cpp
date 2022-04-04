class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry=1;
        for(int i=digits.size()-1; i>=0; i--)
        {
            int num=carry+digits[i];
            ans.push_back(num%10);
            carry=num/10;
        }
        if(carry>0)
            ans.push_back(1);
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};