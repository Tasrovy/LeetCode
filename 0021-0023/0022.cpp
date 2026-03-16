class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> ans(n+1);
        ans[0].push_back("");
        ans[1].push_back("()");
        for(int i = 2;i<n+1;i++){
            for(int index = 0;index<i;index++){
                for(auto l : ans[index]){
                    for(auto r : ans[i-1-index]){
                        ans[i].push_back("("+l+")"+r);
                    }
                }
            }
        }
        return ans[n];
    }
};