// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size() != t.size()) return false;

//         unordered_map<char , int> mpp1 , mpp2;

//         for(char c: s) mpp1[c]++;
//         for(char c: t) mpp2[c]++;

//         if(mpp1 == mpp2) return true;
//         else return false;
//     }
// };

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> mpp;
        for (char c : s) mpp[c]++;
        for (char c : t) {
            if (--mpp[c] < 0) return false;
        }
        return true;
    }
};
