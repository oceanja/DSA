class Solution {
public:
int m,n;
int t[501][501][3];

int getProfit(int row,int col,int k,vector<vector<int>>&coins){
    if(row>=m || col>=n) return INT_MIN;

    if(row==m-1 && col==n-1){
        if(coins[row][col]<0 && k>0){
            return 0;
        }
        else{
            return coins[row][col];
        }
    }

    if(t[row][col][k]!=INT_MIN){
        return t[row][col][k];
    }

    int take=coins[row][col]+ max(getProfit(row,col+1,k,coins),getProfit(row+1,col,k,coins));

    int skip=INT_MIN;

    if(coins[row][col]<0 && k>0){
        int skipDown=getProfit(row+1,col,k-1,coins);
        int skipRight=getProfit(row,col+1,k-1,coins);

        skip=max(skipDown,skipRight);
    }

    return t[row][col][k]=max(take,skip);
}
    int maximumAmount(vector<vector<int>>& coins) {
        m=coins.size();
        n=coins[0].size();

        for(int i=0;i<501;i++){
            for(int j=0;j<501;j++){
                for(int k=0;k<3;k++){
                    t[i][j][k]=INT_MIN;
                }
            }
        }

        return getProfit(0,0,2,coins);
        
    }
};