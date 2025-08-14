class Solution {
public:
    string reverseWords(string s) {
        vector<string>vs;
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && !temp.empty()){
                vs.push_back(temp);
                temp = "";
            }
            else if(s[i] != ' '){
                temp += s[i];
            }
        }
        if(!temp.empty()) vs.push_back(temp);
        string str = "";
        for(int i=vs.size()-1;i>=0;i--){
            str += vs[i];
            if(i!=0) str += " ";
        }
        return str;
    }
};
