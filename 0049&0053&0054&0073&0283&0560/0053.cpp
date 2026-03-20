class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int sum = nums[0];
        int min1 = nums[0];
        int max1 = nums[0];
        for(auto num : nums){
            sum+=num;
            max1 = max(max1,sum-min1);
            min1 = min(min1,sum);
        }
        return max1;
    }
};