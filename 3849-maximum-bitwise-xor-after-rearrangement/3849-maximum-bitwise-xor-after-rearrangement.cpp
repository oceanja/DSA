class Solution {
public:
    string maximumXor(string s, string t) {
        // 2 binary strings- s and t
        // s- unchanged t- can be rearranged
        // return binary string of length n- maximum integer value by (xor of s and rearranged t)
        // 1 0 1
        // 0 1 1   
        //

        int n=s.length();

        int countOnes=0;
        int countZeros=0;
        string str="";

        for(int i=0;i<n;i++){
            if(t[i]=='1'){
                countOnes++;
            }
            else{
                countZeros++;
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(countZeros>=1){
                    str+='0';
                    countZeros--;
                }else{
                    if(countOnes>=1){
                    str+='1';
                    countOnes--;
                    }
                    
                }
            }

            if(s[i]=='0'){
                if(countOnes>=1){
                    str+='1';
                    countOnes--;
                }
                else{
                    if(countZeros>=1){
                        str+='0';
                        countZeros--;
                    }
                }
            }
        }


       string result="";

       for(int i=0;i<n;i++){
        if(s[i]==str[i]){
            result+='0';
        }
        else{
            result+='1';
        }
       }

       return result;


        
    }
};