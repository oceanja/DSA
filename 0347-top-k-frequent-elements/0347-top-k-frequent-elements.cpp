class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int> ans;
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        // 1-4
        // 2--4
        // 3-2

        priority_queue<pair<int,int>> pq;

        for(auto &it: mpp){
            pq.push({it.second,it.first});
        }

        //pq- 4-1 4-2  2-3 

        while(k>0){
            pair <int,int> p=pq.top();
            pq.pop();
            ans.push_back(p.second);
            k--;
        }

        return ans;


    }
};