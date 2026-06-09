class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();

        long long value = *max_element(nums.begin(),nums.end()) - *min_element(nums.begin(),nums.end());

        return k*value;
    }
};