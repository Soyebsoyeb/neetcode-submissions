class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       unordered_map<int , int> mpp;

       for(int i=0 ; i<n ; i++){
        int left = target - nums[i];
        
        if(mpp.find(left) != mpp.end()){
            return {mpp[left] , i};
        }
        mpp[nums[i]] = i;
       }

       return {};
    }
};
