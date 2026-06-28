class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int> answer(n);

        vector<int> prefixProd(n+1);
        vector<int> suffixProd(n+1);

        prefixProd[0]=1;
        suffixProd[n-1]=1;


        for(int i=1;i<=n;i++){
            prefixProd[i]=prefixProd[i-1]*nums[i-1];
        }

        for(int i=n-2;i>=0;i--){
            suffixProd[i]=nums[i+1]*suffixProd[i+1];
        }

        for(int i=0;i<n;i++){
            answer[i]=prefixProd[i]*suffixProd[i];
        }

        return answer;
        
    }
};