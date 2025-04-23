class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        if(k<=0 || k>q.size()){
            return q;
        }
        stack<int>s;
        while(k--){
            s.push(q.front());
            q.pop();
        }
        int n = q.size();
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        while(n--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
