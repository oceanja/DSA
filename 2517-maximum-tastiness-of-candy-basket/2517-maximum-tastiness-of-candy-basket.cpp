class Solution {
public:

int n;

bool calcTastiness(vector<int> &price,int tastiness,int k){
sort(price.begin(),price.end());

// 1 2 5 8 13 21

int cnt=1;
int last=price[0];

for(int i=1;i<n;i++){
    if((price[i]-last)>=tastiness){
        cnt++;
        last=price[i];
        if(cnt>=k) return true;
    }
}

return false;

}
    int maximumTastiness(vector<int>& price, int k) {
        n=price.size();
        // price[i]- ith candy ka price 
        // store sells baskets of k alag alag cndies jaise if k=3 mtlb each basket will have 3 candies distinclty
        // tastiness - smallest absolute diff of prices of any two candies 
        // maximize  krna hai diff of price of candies 

        // 13 5 1 8 21 2  k=3
        int maxi=*max_element(price.begin(),price.end());
        int mini=*min_element(price.begin(),price.end());
        int low=0;
        int high=maxi-mini;
        int ans=1;
        
        // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

        while(low<=high){
            int mid=low+(high-low)/2;
            if(calcTastiness(price,mid,k)==true){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return ans;
    }
};