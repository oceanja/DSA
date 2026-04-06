class Solution {
public:
int m,n;
int maxGold=0;

void solve(vector<vector<int>>& grid,int row,int col,int goldCount){

    if(row<0 || row>=m || col<0 || col>=n || grid[row][col]==0){
        return;
    }

    int temp=grid[row][col];
    goldCount+=temp;
    maxGold=max(maxGold,goldCount);

    grid[row][col]=0; // visited

    

    solve(grid,row,col+1,goldCount); // right
    solve(grid,row+1,col,goldCount); // down
    solve(grid,row,col-1,goldCount);// left
    solve(grid,row-1,col,goldCount); // up

    grid[row][col]=temp;


}
    int getMaximumGold(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int start=0;
        int end=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    solve(grid,i,j,0);
                }
            }
        }

        


        return maxGold;

        
    }
};