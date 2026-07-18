class Solution {
public:
    long long maximumValue(int n, int s, int m) {

        if(n==1){
            return s;
        }

        // s,s+m,s+m-1,s+2m-1,s+2m-2,s+3m-2

        long long ans1 = (long long)s + m + ((long long)(n - 2) / 2) * (m - 1);

        long long ans2 = s; 
        if (n >= 3) {
            ans2 = (long long)s - 1 + m + ((long long)(n - 3) / 2) * (m - 1);
        } else if (n == 2) {
            ans2 = (long long)s - 1; // n=2 par agar niche gaye to s-1 hi milega
        }

        return max(ans1,ans2);


        


    }
};