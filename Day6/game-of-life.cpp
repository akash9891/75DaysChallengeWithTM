class Solution {
public:
    
    int func(vector<vector<int>> &board, int i, int j, int n, int m)
    {
        int dirx[]={0,0,-1,1,-1,1,1,-1};
        int diry[]={1,-1,0,0,-1,-1,1,1};
        
        int cnt=0;
        for(int k=0;k<8;k++)
        {
            int ni=i+dirx[k];
            int nj=j+diry[k];
            
            if(ni<0 || ni>=n || nj<0 || nj>=m)
                continue;
            if(board[ni][nj]==1)
                cnt++;
        }
        return cnt;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        vector<vector<int>> vec(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int nbr=func(board,i,j,n,m);
                if(board[i][j]==1)
                {
                    if(nbr<2 || nbr>3)
                        vec[i][j]=0;
                    else
                        vec[i][j]=1;
                }
                else
                {
                    if(nbr==3)
                        vec[i][j]=1;
                    else
                        vec[i][j]=0;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                board[i][j]=vec[i][j];
            }
        }
        
    }
};