class Solution {
public:
    bool isTrue(int n,long long val){
        if(val == n) return true;
        if(val>n) return false;
        return isTrue(n,val*2);
    }
    bool isPowerOfTwo(int n) {
        if(n==1)return true;
        return isTrue(n,2);
    }
};
