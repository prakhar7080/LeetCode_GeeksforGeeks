class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        queue<int>ans;
        stack<int>s;
        while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            ans.push(s.top());
            s.pop();
        }
        return ans;
    }
};
