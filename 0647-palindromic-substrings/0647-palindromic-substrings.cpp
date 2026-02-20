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
    int countSubstrings(string s) {
        int n=s.length();
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalindrome(s,i,j)){
                    cnt++;
                }
            }
        }


        return cnt;
        
    }
};