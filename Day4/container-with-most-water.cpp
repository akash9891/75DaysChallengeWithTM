class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int start=0,end=n-1;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            int diff=abs(end-start);
            int he=min(height[start],height[end]);
            int vol=diff*he;
            ans=max(ans,vol);
            
            if(height[start]<height[end])
                start++;
            else
                end--;
        }
        return ans;
    }
};