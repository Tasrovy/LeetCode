class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int s = 0;
        int f = 1;
        int size = nums.size();
        while(f<size){
            if (nums[f] != nums[s]) {
                s++;
                nums[s] = nums[f];
            }
            f++;
        }
        return s+1;
    }
};