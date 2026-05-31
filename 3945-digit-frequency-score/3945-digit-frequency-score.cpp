class Solution {
public:
    int digitFrequencyScore(int n) {
        // score of n is defined as the sum of d * freq(d)

        // 122
        // 1 + 2(2)
        int num=n;
        int score=0;

        unordered_map<int,int> mpp;

        while(num!=0){
            int digit=num%10;
            mpp[digit]++;
            num=num/10;
        }

        for(auto &it: mpp){
            score=score+(it.first * it.second);
        }

        return score;
    }
};