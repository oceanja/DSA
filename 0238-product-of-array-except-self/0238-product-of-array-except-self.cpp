class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int> prefix(n);
        vector<int> suffix(n);
        vector<int> answer(n);

        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        // p-> [1,2,6,24]
        //s->[24,24,12,4]

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i];
        }

        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i];
        }

        for(int i=0;i<n;i++){
            if(i==0){
                answer[i]=suffix[1];
            }

            else if(i==n-1){
                answer[i]=prefix[n-2];
            }

            else{
                answer[i]=prefix[i-1]*suffix[i+1];
            }
        }


        return answer;




        
    }
};