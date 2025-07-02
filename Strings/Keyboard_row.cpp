class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        vector<string>keys = {"qwertyuiopQWERTYUIOP","asdfghjklASDFGHJKL","zxcvbnmZXCVBNM"};
        unordered_map<char, int> map;
        for(int k=0;k<keys.size();k++){
            for(char c : keys[k]){
                map[c] = k;
            }
        }
        for(string word : words){
            bool isValid = true;
            int rowNo = map[word[0]];
            for(int j=1;j<word.size();j++){
                if(map[word[j]] != rowNo){
                    isValid = false;
                    break;
                }
            }
            if(isValid) ans.push_back(word);
        }
        return ans;
    }
};
