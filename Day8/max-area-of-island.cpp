int dirx[]={1,-1,0,0};
int diry[]={0,0,1,-1};

class Solution {
public:
    
    bool check(vector<vector<int>> &grid, int n, int m, int i, int j)
    {
        if(i<0 || j<0 || i>=n || j>=m)
            return false;
        if(grid[i][j]==0)
            return false;
        return true;
    }
    
    int func(vector<vector<int>> &grid, int n, int m, int i, int j)
    {
        grid[i][j]=0;
        int count=0;
        for(int k=0;k<4;k++)
        {
            int newx=i+dirx[k];
            int newy=j+diry[k];
            if(check(grid,n,m,newx,newy))
                count+=func(grid,n,m,newx,newy);
        }
        return count+1;    
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int count=func(grid,n,m,i,j);
                    ans=max(ans,count);
                }
            }
        }
        return ans;
    }
};