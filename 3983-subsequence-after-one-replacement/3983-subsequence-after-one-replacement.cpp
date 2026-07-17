class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        if (n > m) return false;

        vector<int> left_match(n, -1);
        int j = 0;
        
        for (int i = 0; i < n; i++) {
            while (j < m && t[j] != s[i]) {
                j++;
            }
            if (j < m) {
                left_match[i] = j;
                j++;
            } else {
                break; 
            }
        }
        
        if (left_match[n - 1] != -1) return true;

        j = m - 1;
        for (int i = n - 1; i >= 0; i--) {
        
            int left_bound = (i > 0) ? left_match[i - 1] : -1;
            int right_bound = j;
        
            if ((i == 0 || left_bound != -1) && (left_bound < right_bound)) {
                return true; 
            }
          
            while (j >= 0 && t[j] != s[i]) {
                j--;
            }
            if (j >= 0) {
                j--; 
            } else {
                break; 
            }
        }
        
        return false;
    }
};