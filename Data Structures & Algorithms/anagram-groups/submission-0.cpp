class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string , vector<string>> groups;

        for(auto &s: strs){
            string key(26 , 0);
            for(char c: s) key[c-'a']++;
            groups[key].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto [key , v] : groups){
            ans.push_back(v);
        }

        return ans;
    }
};
