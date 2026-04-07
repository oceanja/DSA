class Solution {
public:

void solve(vector<vector<int>> &ans, vector<int> combn,int k, int reqSum, int sum,int start){

    if(sum==reqSum && combn.size()==k){
        ans.push_back(combn);
        return;
    }

    if(sum> reqSum || combn.size()>k){
        return;
    }

    for(int i=start;i<=9;i++){
        combn.push_back(i);
        solve(ans,combn,k,reqSum,sum+i,i+1);
        combn.pop_back();
    }

}
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> ans;
        vector<int> combn;
        

        solve(ans,combn,k,n,0,1);

        return ans;
        
    }
};