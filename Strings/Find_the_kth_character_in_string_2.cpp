class Solution {
public:
    void solve(int &count, vector<int>&operations, long long k){
        if(k == 1) return;
        int jump = ceil(log2(k));
        count += operations[jump-1];
        k = k - pow(2,jump-1);
        solve(count,operations,k);
    }
    char kthCharacter(long long k, vector<int>& operations) {
        int count = 0;
        solve(count,operations,k);
        return 'a' + (count%26);
    }
};
