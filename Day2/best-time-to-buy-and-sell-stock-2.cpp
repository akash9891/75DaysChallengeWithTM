class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minn=INT_MAX;
        
        int profit=0;
        for(int i=0;i<n;i++)
        {
            minn=min(prices[i],minn);
            if(prices[i]>minn)
            {
                profit+=prices[i]-minn;
                minn=prices[i];
            }
        }
        
        return profit;
    }
};