class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();

        int i = 0, j = 0;
        int minLength = INT_MAX;
        int start = 0;

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i = 0; i < n; i++)
            mp1[t[i]]++;

        int count = mp1.size();

        while(j < m) {
            mp2[s[j]]++;

            if(mp1.find(s[j]) != mp1.end() && mp2[s[j]] == mp1[s[j]])
                count--;

            while(count == 0) {
                if(j - i + 1 < minLength) {
                    minLength = j - i + 1;
                    start = i;
                }

                mp2[s[i]]--;

                if(mp1.find(s[i]) != mp1.end() && mp2[s[i]] < mp1[s[i]])
                    count++;

                i++;
            }
            j++;
        }

        if(minLength == INT_MAX) return "";
        return s.substr(start, minLength);
    }
};
