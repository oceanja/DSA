class Solution {
public:
int t[1001][1001];
bool checkPalindrome(int i,int j,string &str){

    if(i>j){
        return true;
    }

    if(t[i][j]!=-1){
        return t[i][j];
    }

    if(str[i]==str[j]){
       return t[i][j] = checkPalindrome(i+1,j-1,str);
    }


    return t[i][j]=false;


}

    int countSubstrings(string s) {
        int n=s.length();
        int cnt=0;
        memset(t,-1,sizeof(t));

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkPalindrome(i,j,s)==true){
                    cnt++;
                }
            }
        }

        return cnt;
        
    }
};