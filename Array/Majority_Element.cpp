class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int majority = nums.size()/2;

        for(int num : nums){
            map[num]++;
            if(map[num]> majority){
                return num;
            }
        }
        return -1;
    }
};
