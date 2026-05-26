class Solution {
public:
    int passwordStrength(string password) {
        int n=password.length();

        int strength=0;
        unordered_set<char> st;

        for(int i=0;i<n;i++){
            st.insert(password[i]);
        }

        // b B 1 #

        for(char ch: st){

            if(ch>= 65 && ch<=90){
                strength+=2;
            }
            else if(ch>=97 && ch<=122){
                strength+=1;
            }
            else if(ch>=48 && ch<=57){
                strength+=3;
            }

            else{
                strength+=5;
            }

        }

        return strength;


        
    }
};