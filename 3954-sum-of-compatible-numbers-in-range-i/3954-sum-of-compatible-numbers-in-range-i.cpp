class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {

        int start = max(1,n-k);
        int sum=0;

        for(int x=start; x<=n+k ; x++){

            if(abs(n-x)<=k && (n&x)==0){
                sum+=x;
            }

        }

        return sum;

        
    }
};