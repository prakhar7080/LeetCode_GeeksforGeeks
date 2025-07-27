//Using Two Pointers : 

class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        int left = 0;
        int right = n-1;
        int leftMax = INT_MIN;
        int rightMax = INT_MIN;
        while(left<right){
            leftMax = max(leftMax,height[left]);
            rightMax = max(rightMax,height[right]);
            ans += leftMax<rightMax ? leftMax-height[left++] : rightMax-height[right--];
        }
        return ans;
    }
};

// Second Solution : (Using Auxilary Space)

// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int ans = 0;
//         int n = height.size();
//         vector<int>prefix(n);
//         vector<int>suffix(n);
//         prefix[0] = height[0];
//         suffix[n-1] = height[n-1];
//         for(int i=1;i<height.size();i++){
//             prefix[i] = max(prefix[i-1],height[i]);
//         }
//         for(int i=n-2;i>=0;i--){
//             suffix[i] = max(suffix[i+1],height[i]);
//         }
//         for(int i=0;i<n;i++){
//             if(i == 0 || i == n-1) ans+=0;
//             else{
//                 int left = prefix[i];
//                 int right = suffix[i];
//                 int element = min(left,right)-height[i];
//                 ans += element;
//             }
//         }
//         return ans;
//     }
// };
