class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        int total=0;

        if(n==2){
            total= accumulate(cost.begin(),cost.end(),0);
            return total;
        }

       

        sort(cost.begin(), cost.end(), greater<int>());

        // 9 7 6 5 2 2
        // 3 2 1 

        for(int i=0;i<n;i++){

            if(i%3!=2){
                total+=cost[i];
            }

        }

        return total;




    
        
    }
};