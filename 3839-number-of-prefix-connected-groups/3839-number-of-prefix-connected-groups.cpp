class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int n=words.size();
        unordered_map<string,int> mpp;
        int cnt = 0;

        for(int i=0;i<n;i++){
            string word=words[i]; // apple
            if(word.length()<k) continue;
            string str=word.substr(0,k); // ap
            mpp[str]++; // ap-1
        }

        for(auto &it:mpp){
            if(it.second>=2){
                cnt++;
            }
        }

        return cnt;
        
    }
};