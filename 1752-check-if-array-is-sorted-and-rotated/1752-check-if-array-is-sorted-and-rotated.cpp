class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;

        // [1,2,3,4,5]
        // B[i] == A[(i+x) % A.length]
        // B= [3,4,5,1,2]

        for(int i=0;i<n;i++){
            if(nums[i]>(nums[(i+1)%n])){
                cnt++;
            }
        }

        if(cnt>1){
            return false;
        }

        return true;

        
        
    }
};