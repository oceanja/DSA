class Solution {
public:

bool checkPalindrome(string str){

    int s=0;
    int e=str.length()-1;

    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }

    return true;

}

    int countSubstrings(string s) {
        int n=s.length();
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkPalindrome(s.substr(i,j-i+1))==true){
                    cnt++;
                }
            }
        }

        return cnt;
        
    }
};