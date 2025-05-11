/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void postordertraversal(TreeNode* Node,vector<int>&ans){
        if(Node == nullptr){
            return;
        }
        postordertraversal(Node->left,ans);
        postordertraversal(Node->right,ans);
        ans.push_back(Node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postordertraversal(root,ans);
        return ans;
    }
};
