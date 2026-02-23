class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n=nums.size();
        int p1=0;
        int p2=0;
        bool firstActive=true;

        // [1,2,3]
        // p2- 1 +2
        //p1-3

        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                firstActive=!firstActive;
            }
            if((i+1)%6==0){
                firstActive=!firstActive;
            }

           if(firstActive==false){
            p2+=nums[i];
           }
           else{
            p1+=nums[i];
           }

          
        }

        return p1-p2;

        // swap conditions- nums[i]%2==1
        // (i+1)%6==0
       

        
        
    }
};