class Solution {
public:
    bool traverse(vector<vector<char>>& board, int srow, int erow, int scol,
                  int ecol) {
        unordered_set<int> st3;
        for (int i = srow; i < erow; i++) {
            for (int j = scol; j < ecol; j++) {
                if (board[i][j] == '.')
                    continue;
                if (st3.find(board[i][j]) != st3.end()) {
                    return false;
                }

                else {
                    st3.insert(board[i][j]);
                }
            }
        }

        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

        // validate rwos

        for (int row = 0; row < 9; row++) {
            unordered_set<int> st1;

            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.')
                    continue;
                if (st1.find(board[row][col]) != st1.end()) {
                    return false;
                } else {
                    st1.insert(board[row][col]);
                }
            }
        }

        // validate columns

        for (int col = 0; col < 9; col++) {

            unordered_set<int> st2;

            for (int row = 0; row < 9; row++) {
                if (board[row][col] == '.')
                    continue;
                if (st2.find(board[row][col]) != st2.end()) {
                    return false;
                }

                else {
                    st2.insert(board[row][col]);
                }
            }
        }

        // 3x3 boxes

        for (int sr = 0; sr < 9; sr += 3) {
            int er = sr + 3;

            for (int sc = 0; sc < 9; sc += 3) {
                int ec = sc + 3;

                if (!traverse(board, sr, er, sc, ec))
                    return false;
            }
        }

        return true;
    }
};