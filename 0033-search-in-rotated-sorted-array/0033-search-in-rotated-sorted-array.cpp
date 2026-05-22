class Solution {
public:

    int bs(vector<int>& nums, int low, int high, int target){

        while(low <= high){

            int mid = low + (high-low)/2;

            if(nums[mid] == target){
                return mid;
            }

            else if(nums[mid] > target){
                high = mid - 1;
            }

            else{
                low = mid + 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {

        int n = nums.size();

        int low = 0;
        int high = n - 1;

        int pivotIdx = -1;

        // find pivot
        while(low <= high){

            int mid = low + (high-low)/2;

            if(mid < n-1 && nums[mid] > nums[mid+1]){
                pivotIdx = mid;
                break;
            }

            if(nums[mid] >= nums[low]){
                low = mid + 1;
            }

            else{
                high = mid - 1;
            }
        }

  
        if(pivotIdx == -1){
            return bs(nums, 0, n-1, target);
        }

        
        if(target >= nums[0]){
            return bs(nums, 0, pivotIdx, target);
        }

        return bs(nums, pivotIdx+1, n-1, target);
    }
};