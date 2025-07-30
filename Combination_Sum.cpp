class Solution {
public:
    set<vector<int>>s;
    void combSum(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int target,int index){
        if(index == nums.size() || target < 0){
            return;
        }
        if(target == 0){
            if(s.find(temp) == s.end()){
                ans.push_back(temp);
                s.insert(temp);
            }
            return;
        }
        temp.push_back(nums[index]);
        combSum(nums,ans,temp,target-nums[index],index+1);
        combSum(nums,ans,temp,target-nums[index],index);
        temp.pop_back();
        combSum(nums,ans,temp,target,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        combSum(nums,ans,temp,target,0);
        return ans;
    }
};
