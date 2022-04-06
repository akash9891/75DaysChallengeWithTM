class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> vecc;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int num=target-(nums[i]+nums[j]);
                int st=j+1,en=n-1;
                while(st<en)
                {
                    //cout<<st<<"  "<<en<<endl;
                    int sum=nums[st]+nums[en];
                    if(sum==num)
                    {
                    
                
                            vecc.insert({nums[i],nums[j],nums[st],nums[en]});
                
                        st++,en--;
                    }
                    else if(sum<num)
                    {
                        st++;
                    }
                    else
                    {
                        en--;
                    }
                }
            }
        }
        vector<vector<int>> veccc;
        for(auto i:vecc)
            veccc.push_back(i);
        return veccc;
    }
};