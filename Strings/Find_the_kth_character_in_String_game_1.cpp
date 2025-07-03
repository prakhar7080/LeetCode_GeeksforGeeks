class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";
        while(str.size() < k){
            string gen = "";
            for(int i=0;i<str.size();i++){
                if(str[i] == 'z') gen += 'a';
                else gen += str[i]+1;
            }
            str += gen;
        }
        return str[k-1];
    }
};
