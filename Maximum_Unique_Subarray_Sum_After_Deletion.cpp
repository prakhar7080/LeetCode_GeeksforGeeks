class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && mp[nums[i]] == 0){
                sum += nums[i];
            }
            maxi = max(nums[i],maxi);
            mp[nums[i]]++;
        }
        return maxi<0 ? maxi : sum;
    }
};
