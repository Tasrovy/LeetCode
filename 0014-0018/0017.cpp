class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        unordered_map<char,string> mp = {
            {'2',"abc"},{'3',"def"},
            {'4',"ghi"},{'5',"jkl"},
            {'6',"mno"},{'7',"pqrs"},
            {'8',"tuv"},{'9',"wxyz"}
        };

        vector<string> ans = {""};

        for(char d : digits){
            vector<string> temp;
            for(string s : ans){
                for(char c : mp[d]){
                    temp.push_back(s + c);
                }
            }
            ans = temp;
        }

        return ans;
    }
};