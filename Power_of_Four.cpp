class Solution {
public:
    bool isTrue(int n, long long val){
        if(val == n) return true;
        if(val>n) return false;
        return isTrue(n,val*4);
    }
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        return isTrue(n,4);
    }
};
