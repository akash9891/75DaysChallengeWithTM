
int x[]={0,0,-1,1};
int y[]={1,-1,0,0};

class Solution {
public:
    
    
    bool check(vector<vector<char>> &board,string word,int i,int j,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m)
            return false;
        if(board[i][j]=='0')
            return false;
        if(word[0]!=board[i][j])
            return false;
        return true;
    }
    
    int func(vector<vector<char>> &board, string word, int i, int j, int n, int m)
    {
        if(word.length()==1)
            return 1;
        
        char ch=board[i][j];
        board[i][j]='0';
        for(int k=0; k<4; k++)
        {
            int newx=i+x[k];
            int newy=j+y[k];
            if(check(board,word.substr(1,word.length()-1),newx,newy,n,m))
            {
                int ans=func(board,word.substr(1,word.length()-1),newx,newy,n,m);
                if(ans==1)
                    return 1;
            }
        }
        board[i][j]=ch;
        return 0;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    int ans=func(board,word,i,j,n,m);
                    if(ans==1)
                        return true;
                }
            }
        }
        return false;
    }
};