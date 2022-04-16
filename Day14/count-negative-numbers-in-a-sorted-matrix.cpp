class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0, start=m-1;
        
        for(int i=0; i<n;i++)
        {
            for(int j=start; j>=0; j--)
            {
                if(grid[i][j]<0)
                {
                    ans+=n-i;
                    start--;
                }
                else
                {
                    break;
                }
            }
        }
        
        return ans;
    }
};