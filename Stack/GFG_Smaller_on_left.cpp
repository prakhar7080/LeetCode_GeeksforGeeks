class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        int n = arr.size();
        stack<int>s;
        vector<int>ans(n,-1);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[i]<arr[s.top()]){
                ans[s.top()] = arr[i];
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};
