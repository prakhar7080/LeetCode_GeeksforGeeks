class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n = height.size();
        vector<int>nsr(n,n);
        vector<int>nsl(n,-1);
        int area = INT_MIN;
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && height[i]<height[s.top()]){
                nsr[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && height[i]<height[s.top()]){
                nsl[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        for(int i=0;i<n;i++){
            area = max(area,height[i]*(nsr[i]-nsl[i]-1));
        }
        return area;
    }
};
