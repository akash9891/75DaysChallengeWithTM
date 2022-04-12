class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        
        int ans=0;
        
        vector<int> nsr(n), nsl(n,0);
        stack<pair<int,int>> st; 
        for(int i=n-1; i >=0 ; i--){
            while(!st.empty() and st.top().first >= h[i]) st.pop();
            if(!st.empty() and st.top().first < h[i]) {
                nsr[i] = st.top().second;
                st.push({h[i], i});
            }else{
                nsr[i] = n;
                st.push({h[i],i});
            }
        }
        
        while(!st.empty()) st.pop();
        
        
        
        for(int i=0; i < n ; i++){
            while(!st.empty() and st.top().first >= h[i]) st.pop();
            if(!st.empty() and st.top().first < h[i]) {
                nsl[i] = st.top().second;
                st.push({h[i], i});
            }else{
                nsl[i] = -1;
                st.push({h[i],i});
            }
        }
        
        for(int i=0; i < n; i++){
            int area = ((nsr[i]-1-i) + (i-nsl[i])) * (h[i]);
            ans = max(ans, area);
        }
        return ans;
    }
};