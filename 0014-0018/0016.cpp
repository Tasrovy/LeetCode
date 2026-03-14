class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int ans = nums[1]+nums[2]+nums[3];
        for(int i = 0;i<size-2;i++){
            int j = i+1;
            int k = size-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==target) return sum;
                if(abs(sum-target)<abs(ans-target)){
                    ans = sum;
                }
                if(sum<target){
                    j++;
                    while(j<k&&nums[j]==nums[j-1]) j++;
                }
                else if(sum>target){
                    k--;
                    while(k>j&&nums[k]==nums[k+1]) k--;
                };
            }
        }
        return ans;
    }
};