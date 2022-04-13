class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int ans=INT_MIN;
        for(char ch='A'; ch<='Z'; ch++)
        {
            int start=0,end=0;
            int op=0;
            while(end<n)
            {
                if(s[end]!=ch)
                    op++;
                if(op>k)
                    break;
                end++;
            }
            ans=max(ans,end-start);
    
            while(end<n)
            {
                while(s[start]==ch)
                    start++;    
                start++;
                end++;
                while(end<n && s[end]==ch)
                    end++;
                ans=max(ans,end-start);
            }
        }
        return ans;
    }
};