class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0, ans=INT_MIN;
        for(int i=0; i<k; i++)
            sum+=cardPoints[i];
        ans=max(ans,sum);
        
        int first=k-1, end=n-1;
        while(first>=0)
        {
            sum-=cardPoints[first];
            sum+=cardPoints[end];
            ans=max(sum,ans);
            first--;
            end--;
        }
        return ans;
    }
};