class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int>s;
        int i;
        for(i=0;i<arr.size();i++){
            if(s.empty()){
                s.push(arr[i]);
            }
            else if(arr[i]>=0){
                if(s.top()>=0){
                    s.push(arr[i]);
                }
                else{
                    s.pop();
                }
            }
            else{
                if(s.top()<0){
                    s.push(arr[i]);
                }
                else{
                    s.pop();
                }
            }
        }
        vector<int>ans;
        while(!(s.empty())){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
