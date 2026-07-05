class Solution {
public:

int findDigitRange(int n){

    string num=to_string(n);
    sort(num.begin(),num.end());

    int smallest=num[0]-'0';
    int largest=num.back()-'0';

    return largest-smallest;


}
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        int maxDigitRange=INT_MIN;

        for(int i=0;i<n;i++){
            int digitRange=findDigitRange(nums[i]);
            maxDigitRange=max(maxDigitRange,digitRange);
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (findDigitRange(nums[i]) == maxDigitRange) {
                sum += nums[i];
            }
        }

        return sum;


        
    }
};