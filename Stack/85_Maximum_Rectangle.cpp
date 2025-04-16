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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int ans = 0;
        vector<int>height(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j] == '0'){
                    height[j] = 0;
                }
                else{
                    height[j]++;
                }
            }
            ans = max(ans,largestRectangleArea(height));
        }
        return ans;
    }
};
