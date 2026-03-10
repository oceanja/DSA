

class Solution {
public:

    string f1(string s){
        string t = s.substr(1);
        sort(t.begin(), t.end());
        return s[0] + t;
    }

    string f2(string s){
        string t = s.substr(0, s.size()-1);
        sort(t.begin(), t.end());
        return t + s.back();
    }

    int minOperations(string s) {

        int n = s.size();

        string target = s;
        sort(target.begin(), target.end());

        if(s == target) return 0;

        if(n == 2) return -1;

        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        if(s[0] == mn || s[n-1] == mx)
            return 1;

        if(f2(f1(s)) == target || f1(f2(s)) == target)
            return 2;

        return 3;
    }
};