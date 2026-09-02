class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        for(string str :strs){
            string sstr = str;
            sort(sstr.begin(), sstr.end());
            groups[sstr].push_back(str);
        }
        vector<vector<string>> res;
        for(const auto&[key,val]:groups){
            res.push_back(val);
        }
        return res;
    }
};
