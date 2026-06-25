class Solution {
public:
    bool isAnagram(string s, string t) {

    if (s.length() != t.length()) return false;

        unordered_map<char,int> mpp;

        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        // a-0 n-0 g-0 r-0 m-0

        for(int i=0;i<t.length();i++){
            if(mpp.find(t[i])!=mpp.end()){
                if(mpp[t[i]]>0){
                    mpp[t[i]]--;
                }
                else{

                    return false;

                } 
            }

            else return false;
           
           
        }


        return true;
        
    }
};