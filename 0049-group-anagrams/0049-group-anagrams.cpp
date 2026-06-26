class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> ans;
        unordered_map<string, vector<string>>mpp;

        for(string &word:strs){
            string sorted_word=word;
            sort(sorted_word.begin(),sorted_word.end());
            mpp[sorted_word].push_back(word);
        }

        for(auto &it: mpp){
            ans.push_back(it.second);
        }

        return ans;


        
    }
};