class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) { 
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        
        long long const mod = 1000000007;
        long long num=0;
        long long ansh=INT_MIN;
        for(int i=0;i<hc.size();i++)
        {
            ansh=max(ansh,hc[i]-num);
            num=hc[i];
        }
        ansh=max(ansh,h-num);
        
        num=0;
        long long ansv=INT_MIN;
        for(int i=0;i<vc.size();i++)
        {
            ansv=max(ansv,vc[i]-num);
            num=vc[i];
        }
        ansv=max(ansv,w-num);
        
        ansh=ansh%mod;
        ansv=ansv%mod;
        
        long long ans = (ansh*ansv)%mod;
        return (int)ans;
    }
};