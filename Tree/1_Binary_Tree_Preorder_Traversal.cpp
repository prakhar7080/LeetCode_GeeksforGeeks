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
    
    void preordertraversal(TreeNode* Node,vector<int>&ans){
        if(Node == nullptr){
            return;
        }
        ans.push_back(Node->val);
        preordertraversal(Node->left,ans);
        preordertraversal(Node->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preordertraversal(root,ans);
        return ans;
    }
};
