class Solution {
public:
    bool checkPalindrome(string& str) {
        int n = str.length();

        int i = 0;
        int j = n - 1;

        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            } else {
                i++;
                j--;
            }
        }

        return true;
    }

    bool isPalindrome(string s) {

        int n = s.length();

        string str = "";

        for (int i = 0; i < n; i++) {
            if (!isalnum(s[i]))
                continue;
            if(s[i]>=65 && s[i]<=90){
                str+=tolower(s[i]);
            }
            else{
                str+=s[i];
            }    
            
            // spaces will remove and string will get joined
        }

        return checkPalindrome(str);
    }
};