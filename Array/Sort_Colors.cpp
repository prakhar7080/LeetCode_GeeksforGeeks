class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        int index = 0;
        for(int i=0;i<3;i++){
            while(count[i]--){
                nums[index++] = i;
            }
        }
    }
};
