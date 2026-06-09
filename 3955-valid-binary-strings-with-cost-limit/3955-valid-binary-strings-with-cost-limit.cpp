class Solution {
public:
    vector<string> answer;
    int K;

    bool isValid(string &str) {
        int cost = 0;

        for (int i = 0; i < str.length(); i++) {

            if (i + 1 < str.length() &&
                str[i] == '1' && str[i + 1] == '1') {
                return false;
            }

            if (str[i] == '1') {
                cost += i;   
            }
        }

        return cost <= K;
    }

    void generateString(int idx, int n, string &curr) {

        if (idx == n) {
            if (isValid(curr)) {
                answer.push_back(curr);
            }
            return;
        }

        curr.push_back('0');
        generateString(idx + 1, n, curr);
        curr.pop_back();

        curr.push_back('1');
        generateString(idx + 1, n, curr);
        curr.pop_back();
    }

    vector<string> generateValidStrings(int n, int k) {
        K = k;

        string curr = "";
        generateString(0, n, curr);

        return answer;
    }
};