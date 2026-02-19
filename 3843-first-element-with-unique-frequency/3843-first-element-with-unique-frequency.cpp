class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        } // 20-2 10-1 30-3

        unordered_map<int,int> freq;

        for(auto &p:mpp){
            freq[p.second]++;
        }

        for(int i=0;i<n;i++){
            if(freq[mpp[nums[i]]]==1){
                return nums[i];
            }
        }

        return -1;

    }

        
};