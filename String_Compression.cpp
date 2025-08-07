class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        for(int i=0;i<chars.size();i++){
            char ch = chars[i];
            int count = 0;
            while(i<chars.size() && chars[i] == ch){
                count++;
                i++;
            }
            chars[index++] = ch;
            if(count>1){
                string countStr  = to_string(count);
                for (char c : countStr) {
                    chars[index++] = c;
                }
            }
            i--;
        }
        chars.resize(index);
        return index;
    }
};
