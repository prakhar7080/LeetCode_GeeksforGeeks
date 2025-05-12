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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == nullptr) return ans;
        stack<TreeNode*>s1;
        stack<int>s2;
        s1.push(root);
        while(!s1.empty()){
            TreeNode*Node = s1.top();
            s1.pop();
            if(Node->left != nullptr) s1.push(Node->left);
            if(Node->right != nullptr) s1.push(Node->right);
            s2.push(Node->val);
        }
        while(!s2.empty()){
            ans.push_back(s2.top());
            s2.pop();
        }
        return ans;
    }
};
