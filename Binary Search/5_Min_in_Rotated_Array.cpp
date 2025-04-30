class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0];
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i-1]>nums[i] && nums[i]<nums[i+1] && min>nums[i]){
                min = nums[i];
            }
        }
        if(min>nums[nums.size()-1]){
            min = nums[nums.size()-1];
        }
        return min;
    }
};
