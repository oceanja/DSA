class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        
        int n = nums.size();
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                cnt++;
            }
        }

        int swaps = 0;
        int j = n - 1;

        while(cnt > 0) {

            if(nums[j] != 0) {
                swaps++;
            }

            j--;
            cnt--;
        }

        return swaps;
    }
};