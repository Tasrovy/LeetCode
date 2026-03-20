class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0;
        int f = 0;
        int size = nums.size();
        while(f<size){
            if(nums[f]==0){
                f++;
                continue;
            }
            swap(nums[f],nums[s]);
            s++;
            f++;
        }
        while(s<size)nums[s++]=0;
    }
};