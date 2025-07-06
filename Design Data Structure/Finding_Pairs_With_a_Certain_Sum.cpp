class FindSumPairs {
public:
    vector<int>arr1;
    vector<int>arr2;
    unordered_map<int,int> map;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        arr1 = nums1;
        arr2 = nums2;
        for(int x : nums2){
            map[x]++;
        }
    }
    
    void add(int index, int val) {
        map[arr2[index]]--;
        arr2[index]+=val;
        map[arr2[index]]++;
    }
    
    int count(int tot) {
        int count = 0;
        for(int x : arr1){
            count += map[tot - x];
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
