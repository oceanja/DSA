class Solution {
public:
int m,n;
int paths=0;


void solve(int row, int col, vector<vector<int>>& grid,int cnt){

     if (row<0||col<0||row>= m||col>= n|| grid[row][col] == -1){
        return ;
     }

     if(grid[row][col]==2){
        if(cnt==1){
            paths++;
        }

        return;
     }

     int temp=grid[row][col];
     grid[row][col]=-1;

        solve(row + 1, col, grid, cnt - 1);
        solve(row - 1, col, grid, cnt - 1);
        solve(row, col + 1, grid, cnt- 1);
        solve(row, col - 1, grid, cnt - 1);

        grid[row][col]=temp;

    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        // 1 0 0 0 
        // 0 0 0 0
        // 0 0 2 -1

         m=grid.size();
        n=grid[0].size();
        int cnt=0;
        int start=0;
        int end=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=-1){
                    cnt++;
                }
                if(grid[i][j]==1){
                     start=i;
                     end=j;
                }
            }
        }

        solve(start,end,grid,cnt);

        return paths;


        
    }
};