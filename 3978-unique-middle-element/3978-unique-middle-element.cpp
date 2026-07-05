class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++){

            mpp[nums[i]]++;
        }

        int lo=0;
        int hi=n-1;

        int middleEl=nums[(lo+hi)/2];

        if(mpp[middleEl]>1){
            return false;
        }

        return true;
        
    }
};