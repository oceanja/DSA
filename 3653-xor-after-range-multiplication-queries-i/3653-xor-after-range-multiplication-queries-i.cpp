class Solution {
public:

const int MOD = 1e9 + 7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
    
        for(auto &query:queries){
            int l=query[0];
            int r=query[1];
            int inc=query[2];
            int num=query[3];

            for(int idx=l;idx<=r;idx+=inc){
                nums[idx]=(1LL*nums[idx] * num) % MOD;
            }
        }

        int ans=0;

        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }

        return ans;
        
    }
};