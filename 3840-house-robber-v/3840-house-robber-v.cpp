class Solution {
public:
int n;
long long  t[1000001];
long long solve(vector<int>& nums,vector<int>& colors,int idx){

    if(idx>=n){
        return 0;
    }

    if(t[idx]!=-1){
        return t[idx];
    }

    long long take;

    if(idx+1<n && colors[idx]==colors[idx+1]){
        take=nums[idx]+solve(nums,colors,idx+2);
    }
    else{
        take=nums[idx]+solve(nums,colors,idx+1);
    }

    long long not_take=solve(nums, colors, idx + 1);
    return t[idx]=max(take,not_take);

}
    long long rob(vector<int>& nums, vector<int>& colors) {
        n=nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,colors,0);


        
    }
};