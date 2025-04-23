class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        if(k>q.size()){
            return q;
        }
        vector<int>rest;
        stack<int>s;
        while(k--){
            s.push(q.front());
            q.pop();
        }
        while(!q.empty()){
            rest.push_back(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        for(int i=0;i<rest.size();i++){
            q.push(rest[i]);
        }
        return q;
    }
};
