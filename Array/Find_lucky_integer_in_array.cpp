class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>map;
        int ans = -1;
        for(int ele : arr){
            map[ele]++;
        }
        for(int ele : arr){
            if(ele == map[ele]){
                ans = max(ans, ele);
            }
        }
        return ans;
    }
};
