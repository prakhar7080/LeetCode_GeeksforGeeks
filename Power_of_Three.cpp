class Solution {
public:
    bool isPowerOfThree(int n) {
        long long val = 3;
        if(n<=0) return false;
        if(n == 1) return true;
        while(val<n){
            val = val * 3;
        }
        if(val == n) return true;
        return false;
    }
};
