class Solution {
public:

long long timeTaken(vector<int>& piles, int speed){
    int n=piles.size();

    long long time=0;

    for(int i=0;i<n;i++){
        time+=ceil((double)(piles[i])/double(speed));
    }

    return time;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
        int ans=INT_MAX;

        int low=1;
        int high=*max_element(piles.begin(),piles.end());

        while(low<=high){
            int mid=(low+high)/2;
            if(timeTaken(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }

            else{
                low=mid+1;
            }
            
        }

        return ans;
        
    }
};