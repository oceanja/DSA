class Solution {
public:
    void build(int i, int j, vector<string>& grid, int m, int n) {
        grid[i][j] = '.';

        if (i == m - 1 && j == n - 1)
            return;

        if (j < n - 1)
            build(i, j + 1, grid, m, n);  
        else
            build(i + 1, j, grid, m, n);  
    }

    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));

        build(0, 0, grid, m, n);

        return grid;
    }
};