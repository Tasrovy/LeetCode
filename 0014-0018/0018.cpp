class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i = 0;i<size-3;i++){
            long long minSum = (long long)nums[i] + nums[i+1] + nums[i+2] + nums[i+3];
            if(minSum > target) break;
            long long maxSum = (long long)nums[i] + nums[size-1] + nums[size-2] + nums[size-3];
            if(maxSum < target) continue;
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int l =i+1;l<size-2;l++){
                long long minSum = (long long)nums[i] + nums[l] + nums[l+1] + nums[l+2];
                if(minSum > target) break;
                long long maxSum = (long long)nums[i] + nums[size-1] + nums[size-2] + nums[l];
                if(maxSum < target) continue;
                if(l>i+1&&nums[l]==nums[l-1]) continue;
                int j = l+1;
                int k = size-1;
                while(j<k){
                    long long sum  = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum==target) {
                        ans.push_back({nums[i],nums[l],nums[j],nums[k]});
                        //ans.push_back({i,l,j,k});
                        j++;
                        k--;
                        while(j<k&&nums[j]==nums[j-1]) j++;
                        while(k>j&&nums[k]==nums[k+1]) k--;
                    }
                    else if(sum<target){
                        j++;
                    }
                    else{
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};