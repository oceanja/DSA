class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string t = "";

      for (char c : s) {
        if (isalnum(c)) {          
        t += tolower(c);       
    }
}

int l=0;
int r=t.length()-1;

while(l<r){
    if(t[l]!=t[r]){
        return false;
    }
    else{
        l++;
        r--;
    }
}

return  true; 
    }
};