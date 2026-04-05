class Solution {
public:
    int m, n;
    int paths = 0;

    void solve(int row, int col, vector<vector<int>>& grid, int currentCnt, int totalCnt) {

        // boundary + obstacle
        if (row < 0 || col < 0 || row >= m || col >= n || grid[row][col] == -1)
            return;

        // if reached end
        if (grid[row][col] == 2) {
            if (currentCnt == totalCnt) {
                paths++;
            }
            return;
        }

        // mark visited
        int temp = grid[row][col];
        grid[row][col] = -1;

        // explore 4 directions
        solve(row + 1, col, grid, currentCnt + 1, totalCnt);
        solve(row - 1, col, grid, currentCnt + 1, totalCnt);
        solve(row, col + 1, grid, currentCnt + 1, totalCnt);
        solve(row, col - 1, grid, currentCnt + 1, totalCnt);

        // backtrack
        grid[row][col] = temp;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {

        m = grid.size();
        n = grid[0].size();

        int totalCnt = 0;
        int startRow, startCol;

        // count all non-obstacle cells + find start
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != -1) totalCnt++;
                if (grid[i][j] == 1) {
                    startRow = i;
                    startCol = j;
                }
            }
        }

        solve(startRow, startCol, grid, 1, totalCnt);

        return paths;
    }
};