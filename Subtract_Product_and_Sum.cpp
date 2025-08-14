class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int n1 = n;
        int n2 = n;
        while(n1){
            prod = prod * (n1%10);
            n1 = n1/10;
        }
        int sum = 0;
        while(n2){
            sum = sum + (n2%10);
            n2 = n2/10;
