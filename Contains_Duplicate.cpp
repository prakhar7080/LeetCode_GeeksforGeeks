class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int n:nums){
            map[n]++;
        }
        for(auto &n:map){
            if(n.second>1) return true;
        }
        return false;
    }
};
