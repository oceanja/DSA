class Solution {
public:
int t[1001][1001];
bool isPalindrome(string &s,int left,int right){
    if(left>=right){
        return 1;
    }

    if(t[left][right]!=-1){
        return t[left][right];
    }

    if(s[left]==s[right]){
        return t[left][right]=isPalindrome(s,left+1,right-1);
    }

    return t[left][right]=0;

}
    int countSubstrings(string s) {
        int n=s.length();
        int cnt=0;
        memset(t,-1,sizeof(t));

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