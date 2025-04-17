class Solution {
  public:
    stack<int>main;
    stack<int>mini;
    // Solution() {
    //     // code here
    // }

    // Add an element to the top of Stack
    void push(int x) {
        if(main.empty()){
            main.push(x);
            mini.push(x);
        }
        else{
            main.push(x);
            mini.push(std::min(x,mini.top()));
        }
    }

    // Remove the top element from the Stack
    void pop() {
        if(main.empty()){
            return;
        }
        else{
            main.pop();
        }
    }

    // Returns top element of the Stack
    int peek() {
        if(main.empty()){
            return -1;
        }
        else{
            return main.top();
        }
    }

    // Finds minimum element of Stack
    int getMin() {
        if(mini.empty()){
            return -1;
        }
        else{
            return mini.top();
        }
    }
};
