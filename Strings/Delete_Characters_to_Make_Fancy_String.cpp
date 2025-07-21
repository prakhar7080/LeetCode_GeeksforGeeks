class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(i< 2 || !(s[i-1] == s[i] && s[i-2] == s[i])) ans += s[i];
        }
        return ans;
    }
};
