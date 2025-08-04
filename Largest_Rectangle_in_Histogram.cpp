class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>st;
        vector<int>prev(n);
        vector<int>next(n);
        int ans = 0;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) prev[i] = -1;
            else prev[i] = st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) next[i] = n;
            else next[i] = st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++){
            int area = heights[i] * (next[i]-prev[i]-1);
            ans = max(area,ans);
        }
        return ans;
    }
};
