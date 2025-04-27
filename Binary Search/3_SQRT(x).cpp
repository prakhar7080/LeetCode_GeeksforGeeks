class Solution {
public:
    int mySqrt(int x) {
        int ans;
        int start = 1;
        int end = x;
        int mid;
        if(!x) return x;
        while(start<=end){
            mid = start+(end-start)/2;
            if(mid == x/mid){
                return mid;
            }
            else if(mid > x/mid){
                end = mid-1;
            }
            else{
                ans = mid;
                start = mid+1;
            }
        }
        return ans;
    }
};
