class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int n=nums.size();
        vector<int> answer(n);

        vector<int> prefixSum(n,0);
        vector<int> suffixSum(n,0);

        prefixSum[0]=0;
        suffixSum[n-1]=0;

        for(int i=1;i<n;i++){
            prefixSum[i]=nums[i-1]+prefixSum[i-1];
        }

        for(int i=n-2;i>=0 ;i--){
            suffixSum[i]=suffixSum[i+1]+nums[i+1];
        }

        for(int i=0;i<n;i++){
            answer[i]=abs(prefixSum[i]-suffixSum[i]);
        }

        return answer;


        
    }
};