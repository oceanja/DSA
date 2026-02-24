class Solution {
public:
int n;
unordered_set<int> st;

void solve(vector<int>& nums,  vector<vector<int>> &result,vector<int> &ans){
    if(ans.size()==n){
        result.push_back(ans);
        return ;
    }

    for(int i=0;i<n;i++){
        if(st.find(nums[i])==st.end()){
            ans.push_back(nums[i]);
            st.insert(nums[i]);
            solve(nums,result,ans);

            ans.pop_back();
            st.erase(nums[i]);
        }

    }


}
    vector<vector<int>> permute(vector<int>& nums) {
         n=nums.size();

        vector<vector<int>> result;
        vector<int> ans;

        solve(nums,result,ans);

        return result;
        
    }
};