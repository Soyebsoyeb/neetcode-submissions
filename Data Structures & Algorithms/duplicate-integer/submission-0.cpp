class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mpp;

        for(auto num : nums){
            mpp[num]++;
            if(mpp[num] > 1) return true;
        }

        return false;
    }
};