class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n=s.length();

        string t="";

        for(int i=0;i<n;i++){
            if(s[i]==y){
                t+=s[i];
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]!=x && s[i]!=y){
                t+=s[i];
            }
        }

        for(int i=0; i<n;i++){
            if(s[i]==x){
                t+=x;
            }
        }

        return t;
        
    }
};