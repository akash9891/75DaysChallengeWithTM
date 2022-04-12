class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        
        map<char,int> mp,track;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        
        vector<int> ans;
        int start=0,end=0,sum=0;
        while(end<n)
        {
            mp[s[end]]--;
            if(track[s[end]]==0)
            {
                sum+=mp[s[end]];
                track[s[end]]=1;
            }
            else
                sum--;
            
            if(sum==0)
            {
                int size=end-start+1;
                ans.push_back(size);
                start=end+1;
                end=end+1;
            }
            else
                end=end+1;
        }
        return ans;
    }
};