class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        if(k<=0 || k>q.size()){
            return q;
        }
        stack<int>s;
        int n = q.size()-k;
        while(k--){
            s.push(q.front());
            q.pop();
        }
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
