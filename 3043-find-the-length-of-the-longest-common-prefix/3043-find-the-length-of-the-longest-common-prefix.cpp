class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> st;
        int result = 0;

        for (int i = 0; i < arr1.size(); i++) {
            while (!st.count(arr1[i]) && arr1[i] > 0) {
                st.insert(arr1[i]);
                arr1[i]/=10;
            }
        }

        for(int num:arr2){
            while(!st.count(num) && num>0){
                num/=10;
            }

            if(num>0){
                result=max(result, static_cast<int>(log10(num)+1));
            }
        }

        return result;
    }
};