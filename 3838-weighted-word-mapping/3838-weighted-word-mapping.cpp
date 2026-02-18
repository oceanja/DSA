class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string ans="";

        for(string &str:words){
            int wt=0;
            for(char c: str){
                wt+=weights[c-'a'];
            }

            int newWt = wt % 26;
            char mappedChar = 'z' - newWt;
            ans.push_back(mappedChar);

        }

        return ans;
        
    }
};