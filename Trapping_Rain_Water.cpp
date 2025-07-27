class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0] = height[0];
        suffix[n-1] = height[n-1];
        for(int i=1;i<height.size();i++){
            prefix[i] = max(prefix[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            suffix[i] = max(suffix[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            if(i == 0 || i == n-1) ans+=0;
            else{
                int left = prefix[i];
                int right = suffix[i];
                int element = min(left,right)-height[i];
                ans += element;
            }
        }
        return ans;
    }
};
