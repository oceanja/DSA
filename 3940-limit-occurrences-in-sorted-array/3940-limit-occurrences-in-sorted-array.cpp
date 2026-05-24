class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();

        
        unordered_map<int,int> mpp;
        vector<int> arr;


        for(int i=0;i<n;i++){
            if(mpp[nums[i]]<k){
                arr.push_back(nums[i]);
                mpp[nums[i]]++;
            }
            
        }

        return arr;
    
    }
};