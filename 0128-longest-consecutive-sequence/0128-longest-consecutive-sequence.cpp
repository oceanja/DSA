class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();

        unordered_set<int> st(nums.begin(),nums.end());
        int ans=0;

        for(auto &el:st){
            if(st.find(el-1)==st.end()){
                int curr=el;
                int len=1;

            while(st.find(curr+1)!=st.end()){
                curr++;
                len++;
            }

            ans=max(ans,len);
        }

        
        }

        return ans;

        
        
    }
};