class Solution {
public:
    int linearSearch(vector<int>&nums2, int ele){
        for(int i=0;i<nums2.size();i++){
            if(nums2[i] == ele) return i;
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int index = linearSearch(nums2, nums1[i]);
            int nextGreater = -1;
            for(int j = index; j<nums2.size();j++){
                if(nums2[j] > nums2[index]){
                    nextGreater = nums2[j];
                    break;
                }
            }
            ans.push_back(nextGreater);
        }
        return ans;
    }
};
