class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int index;
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && height[i]<height[s.top()]){
                index = s.top();
                s.pop();
                if(!s.empty()){
                    ans = max(ans, height[index]*(i-s.top()-1));
                }
                else{
                    ans = max(ans, height[index]*i);
                }
            }
            s.push(i);
        }
        while(!s.empty()){
            index = s.top();
            s.pop();
            if(!s.empty()){
                ans = max(ans, height[index]*(n-s.top()-1));
            }
            else{
                ans = max(ans, height[index]*n);
            }
        }
        return ans;
    }
};
