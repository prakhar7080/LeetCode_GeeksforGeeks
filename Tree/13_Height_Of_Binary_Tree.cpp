// User function template for C++

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int answer(Node* node){
        if(node == NULL){
            return 0;
        }
        return 1 + max(answer(node->left),answer(node->right));
    }
    int height(Node* node) {
        return answer(node)-1;
        
    }
};
