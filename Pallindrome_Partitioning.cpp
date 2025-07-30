class Solution {
public:
    bool isPallindrome(string s){
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    void getAllPartitions(string s, vector<vector<string>>&ans,vector<string>&partitions){
        if(s.size() == 0){
            ans.push_back(partitions);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part = s.substr(0,i+1);
            if(isPallindrome(part)){
                partitions.push_back(part);
                getAllPartitions(s.substr(i+1),ans,partitions);
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>partitions;
        getAllPartitions(s,ans,partitions);
        return ans;
    }
};
