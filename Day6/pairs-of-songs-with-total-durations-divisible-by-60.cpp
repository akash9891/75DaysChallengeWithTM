class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            time[i]=time[i]%60;
            mp[time[i]]++;
        }
        
        int ans=0;
        for(int i=1;i<30;i++)
            ans+=mp[i]*(mp[60-i]);
        
        long long int m=mp[30]-1;
        ans+=(m*(m+1))/2;
        m=mp[0]-1;
        ans+=(m*(m+1))/2;
        
        return ans;
    }
};