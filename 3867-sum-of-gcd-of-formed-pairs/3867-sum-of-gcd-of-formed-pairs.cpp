class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<long long> prefixGcd(n);

        int maxi=nums[0];

        prefixGcd[0]=nums[0];
        // 2 6 2

        for(int i=1;i<n;i++){
            maxi=max(maxi,nums[i]);
            prefixGcd[i]=gcd(nums[i],maxi);
        }

        sort(prefixGcd.begin(),prefixGcd.end());
        // 0 1 2
        // 2 2 6
        //     l.  r
        // [2, 3, 6, 8]

        int l=0;
        int r=n-1;
        long long sum=0;

        while(l<r){
            sum+=gcd(prefixGcd[l],prefixGcd[r]);
            l++;
            r--;
        }

        return sum;


    }
};