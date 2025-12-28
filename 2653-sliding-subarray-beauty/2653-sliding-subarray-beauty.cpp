class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int> result;
        vector<int> freq(101,0);

        int i=0;
        int j=0;

        while(j<n){
            if(nums[j]<0){
                freq[nums[j]+50]++;
            }

            if(j-i+1==k){
                int cnt=0;
                int beauty=0;
                for(int v=0;v<50;v++){
                    cnt+=freq[v];
                    if(cnt>=x){
                        beauty=v-50;
                        break;
                    }
                }

                result.push_back(beauty);

                if(nums[i]<0){
                    freq[nums[i]+50]--;
                }
                i++;
            }

            j++;

        }

        return result;
        
    }
};