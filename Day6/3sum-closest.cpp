class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int a;
        for(int i=0;i<n;i++)
        {
            int st=i+1;
            int en=n-1;
            int target2=target-nums[i];
            while(st<en)
            {
                int sum=nums[st]+nums[en];
                int diff=abs(target2-sum);
                if(diff<ans)
                {
                    a=nums[i]+nums[st]+nums[en]; 
                    ans=diff;
                }
                if(sum>target2)
                    en--;
                else
                    st++;
            }
        }
        return a;
    }
};