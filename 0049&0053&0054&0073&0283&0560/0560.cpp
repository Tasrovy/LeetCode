class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        hash[0] = 1;
        int sum = 0;
        int count = 0;
        for(auto num : nums){
            sum+=num;
            if(hash.find(sum-k)!=hash.end()){
                count+=hash[sum-k];
            }
            hash[sum]++;
        }
        return count;
    }
};