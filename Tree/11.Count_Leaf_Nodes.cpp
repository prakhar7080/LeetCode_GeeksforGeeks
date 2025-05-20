// User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    void count_leaves(Node *root,int &count){
        if(root == NULL){
            return;
        }
        else if(root->left == NULL && root->right == NULL){
            count++;
            return;
        }
        count_leaves(root->left,count);
        count_leaves(root->right,count);
    }
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        int count = 0;
        count_leaves(root,count);
        return count;
    }
};
