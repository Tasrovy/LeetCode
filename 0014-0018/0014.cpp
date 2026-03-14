class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int index = 0;
        int num = strs.size();
        vector<int> size;
        for(int i = 0;i<num;i++){
            size.push_back(strs[i].size());
        }
        while(true){
            bool needBreak = false;
            for(int i = 0;i<num;i++){
                if(index>=size[i]){
                    needBreak = true;
                    break;
                }
                else if(strs[0][index]!=strs[i][index]){
                    needBreak = true;
                    break;
                }
            }
            if(needBreak) break;
            ans+=strs[0][index];
            index++;
        }
        return ans;
    }
};