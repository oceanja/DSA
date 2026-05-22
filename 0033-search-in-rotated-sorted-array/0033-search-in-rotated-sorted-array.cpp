class Solution {
public:

int bs(vector<int>& nums, int low, int high, int target){

    while(low<=high){
        int mid= (low)+(high-low)/2;

        if(nums[mid]==target){
            return mid;
        }

        else if (nums[mid]>target){
            high=mid-1;
        }

        else{
            low=mid+1;
        }
    }

    return -1;
}
    int search(vector<int>& nums, int target) {
        int n=nums.size();

        int partitionIdx=-1;

        for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]){
                partitionIdx=i;
            }
        }

       int ans1= bs(nums,partitionIdx+1,n-1,target);
       int ans2= bs(nums,0,partitionIdx,target);

       if(ans1!=-1){
        return ans1;
       }

       if(ans2!=-1){
        return ans2;
       }

       return -1;
        
    }
};