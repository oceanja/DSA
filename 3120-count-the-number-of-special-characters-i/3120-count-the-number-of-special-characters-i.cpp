class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.length();

        int cnt=0;
        unordered_set<char> st;

        for(int i=0;i<n;i++){
            st.insert(word[i]);
        } // a A b c B C

        for(auto &ch: word){
            if(islower(ch) && st.find(toupper(ch))!=st.end()){
                cnt++;
                st.erase(ch);
                st.erase(toupper(ch));
            }

            if(isupper(ch) && st.find(tolower(ch))!=st.end()){
                cnt++;
                st.erase(ch);
                st.erase(tolower(ch));
            }
        }

        return cnt;


        
    }
};