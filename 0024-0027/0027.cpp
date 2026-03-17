class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s = 0;
        int f = 0;
        int size = nums.size();
        while(f<size){
            if(nums[f] != val) nums[s++] = nums[f];
            f++;
        }
        return s;
    }
};