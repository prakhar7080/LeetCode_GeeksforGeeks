class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>arr;
        int count = 0;
        arr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] != nums[i]){
                arr.push_back(nums[i]);
            }
        }
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                count++;
            }
            if(arr[i] < arr[i-1] && arr[i] < arr[i+1]){
                count++;
            }
        }
        return count;
    }
};
