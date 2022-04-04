class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int num=INT_MAX, ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            num=min(num,prices[i]);
            ans=max(ans,(prices[i]-num));
        }
        return ans;
    }
};