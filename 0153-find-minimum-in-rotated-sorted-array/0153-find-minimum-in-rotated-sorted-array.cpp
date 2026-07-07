class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();

        int low=0;
        int high=n-1;

        int ans=INT_MAX;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                // 1 2 3 4 5 6 7
                // 7 6 1 2 3 4 5
                high=mid-1;
                ans=min(ans,nums[mid]);
            }
        }

        return ans;

        
    }
};