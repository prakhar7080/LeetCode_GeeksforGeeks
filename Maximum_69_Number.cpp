class Solution {
public:
    int maximum69Number (int num) {
        int maxi = num;
        string number = to_string(num);
        for(int i=0;i<number.size();i++){
            string temp = number;
            if(temp[i] == '6') temp[i] = '9';
            maxi = max(maxi,stoi(temp));
        }
        return maxi;

    }
};
