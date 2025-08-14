class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int smallest = 201;
        for(int i=0;i<strs.size();i++){
            smallest = min(smallest,int(strs[i].size()));
        }
        string ans = "";
        for(int i=0;i<smallest;i++){
            char ch = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i] != ch) return ans;
            }
            ans+=ch;
        }
        return ans;
    }
};
