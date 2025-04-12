class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        stack<string>s;
        int i;
        for(i=0;i<arr.size();i++){
            if(s.empty()){
                s.push(arr[i]);
            }
            else{
                if(arr[i] == s.top()){
                    s.pop();
                }
                else{
                    s.push(arr[i]);
                }
            }
        }
        return s.size();
    }
};
