class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0, end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid>0 && mid<n-1 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                return mid;
            
            if(mid==0 || arr[mid]>arr[mid-1])
                start=mid+1;
            else
                end=mid-1;
        }
        return n/2;
    }
};