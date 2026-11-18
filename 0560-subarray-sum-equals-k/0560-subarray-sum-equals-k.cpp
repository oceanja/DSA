class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();


        unordered_map<int,int> mpp; // sum,frwq;

        int sum=0;
        int answer=0;
        mpp.insert({0,1});


        for(int i=0;i<n;i++){
            sum+=nums[i];

            if(mpp.find(sum-k)!=mpp.end()){
                answer+=mpp[sum-k];
            }

            mpp[sum]++;

        }

        return answer;
        
    }
};