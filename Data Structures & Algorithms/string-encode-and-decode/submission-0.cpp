class Solution {
public:

    string encode(vector<string>& strs) {
        string res;

        for(const string &s: strs){
            res += to_string(s.size());
            res += '#';
            res += s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int i=0 , n=s.size();

        while(i<n){
            int j = i;
            while(j<n && s[j]!='#') j++;
            int len = stoi(s.substr(i , j-i));

            string word = s.substr(j+1 , len);
            res.push_back(word);

            i = j+1+len;
        }

        return res;
    }
};
