class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        set<pair<int,int>> st;
        for(int i=0;i<intervals.size();i++)
        {
            st.insert({intervals[i][0],intervals[i][1]});
        }
        
        map<int,int> mp;
        for(auto i:st)
        {
            mp[i.first]++;
            mp[i.second]--;
        }
        
        vector<vector<int>> vec;
        int trv=0,ac=0;
        int p;
        for(auto x:mp)
        {
            trv+=x.second;
            if(ac==0 && trv>=1)
            {
                p=x.first;
                ac=1;
            }
            else if(ac==1 && trv==0)
            {
                ac=0;
                vec.push_back({p,x.first});
            }
            else if(trv==0)
            {
                vec.push_back({x.first,x.first});
            }
            
        }
        
        return vec;
    }
};