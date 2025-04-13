class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        int count = 0;
        vector<int>ans;
        stack<int>s;
        for(int i=0;i<str.size();i++){
            if(str[i] == '('){
                count++;
                ans.push_back(count);
                s.push(count);
            }
            else if(str[i] == ')'){
                ans.push_back(s.top());
                s.pop();
            }
        }
        return ans;
    }
};
