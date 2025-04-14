class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        stack<int>s;
        vector<int>ans(n,1);
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[i]>arr[s.top()]){
                ans[s.top()] = s.top()-i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            ans[s.top()] = s.top()+1;
            s.pop();
        }
        return ans;
    }
};
