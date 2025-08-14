#include<string>
class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        for(int i=0;i<num.size()-2;i++){
            string sub = num.substr(i,3);
            if((sub[0] == sub[1]) && (sub[1] == sub[2]) && 
            (ans.empty() || stoi(sub)>stoi(ans))){
                ans = sub;
            }
        }
        return ans;
    }
};
