class Solution {
public:
    int getFactorial(int x) {
        if (x == 0) return 1;
        int res = 1;
        for (int i = 1; i <= x; i++) res *= i;
        return res;
    }

    bool isDigitorialPermutation(int n) {
        string s = to_string(n);
        int sum = 0;
        for (char c : s) {
           sum += getFactorial(c - '0');
        }
        sort(s.begin(), s.end());
        do {
            if (s[0] == '0') continue;
            int permNum = stoi(s);
            if (permNum == sum) {
                return true;
            }

        } while (next_permutation(s.begin(), s.end()));

        return false;
    }
};