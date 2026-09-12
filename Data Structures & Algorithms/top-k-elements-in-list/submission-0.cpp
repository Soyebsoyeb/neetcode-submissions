class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int , int>mpp;

        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;

        for(int num: nums) mpp[num]++;

        for(auto [num , count]: mpp){
            pq.push({count , num});
            if((int)pq.size() > k) pq.pop(); 
        }

        vector<int> ans;

        while(pq.size() != 0){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
