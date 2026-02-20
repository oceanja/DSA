class Solution {
public:
bool isPalindrome(string &s,int left,int right){
    
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }

    return true;
    
}
    string longestPalindrome(string s) {

        int n=s.length();
        int maxLen=1;
        int p=0;

      for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isPalindrome(s,i,j)){
                if(maxLen<j-i+1){
                    maxLen=j-i+1;
                    p=i;
                }
            }
        }
      }

        return s.substr(p,maxLen);
    }
};