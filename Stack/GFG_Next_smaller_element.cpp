#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n, -1);
    stack<int>s;
    for(int i = 0; i < n; i++) {
        while (!s.empty() && arr[i] < arr[s.top()]) {
            ans[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    return ans;
}
