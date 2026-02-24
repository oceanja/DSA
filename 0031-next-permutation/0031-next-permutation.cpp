class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;

        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                idx=i-1;
                break;
            }
        }

        int swap_idx=idx;

        if(idx!=-1){
             for(int j=n-1;j>=idx+1;j--){

            if(nums[j]>nums[idx]){
                swap_idx=j;
                break;
            }

        }

        swap(nums[idx],nums[swap_idx]);

        }


        reverse(nums.begin()+idx+1,nums.end());

       
        
    }
};