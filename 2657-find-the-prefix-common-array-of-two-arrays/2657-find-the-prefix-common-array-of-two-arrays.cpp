class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();

        vector<int> C(n);
        unordered_map<int,int> freq;
        int cnt=0;

        // A = [1,3,2,4]
        // B = [3,1,2,4]

       for(int i=0;i<n;i++){

        freq[A[i]]++;

        if(freq[A[i]]==2){
            cnt++;
        }

        freq[B[i]]++;
        if(freq[B[i]]==2){
            cnt++;
        }

        C[i]=cnt;


       }

       return C;





        
    }
};