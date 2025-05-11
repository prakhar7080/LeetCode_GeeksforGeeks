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
    
    void inordertraversal(TreeNode* Node,vector<int>&ans){
        if(Node == nullptr){
            return;
        }
        inordertraversal(Node->left,ans);
        ans.push_back(Node->val);
        inordertraversal(Node->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inordertraversal(root,ans);
        return ans;
    }
};
