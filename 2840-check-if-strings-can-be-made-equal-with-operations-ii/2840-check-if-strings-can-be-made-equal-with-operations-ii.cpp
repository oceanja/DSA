class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.length();
        // s1 and s2
        // Choose any two indices i and j such that i < j and the difference j - i is even, then swap the two characters at those indices in the string.

        // s1 = "abcdba", s2 = "cabdab"

        int even[26]={0};
        int odd[26]={0};

        for(int i=0;i<n;i++){
            if(i%2==0){
                even[s1[i]-'a']++;
                even[s2[i]-'a']--;
            }

            else{
                odd[s1[i]-'a']++;
                odd[s2[i]-'a']--;
            }
        }

        for(int i=0;i<26;i++){
            if(even[i]!=0 || odd[i]!=0){
                return false;
            }
        }

        return true;


    }
};