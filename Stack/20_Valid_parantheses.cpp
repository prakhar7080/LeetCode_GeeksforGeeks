class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i;
        for(i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                else if((s[i] == ')' && st.top() != '(') ||
                (s[i] == '}' && st.top() != '{')||
                (s[i] == ']' && st.top() != '[')){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};
