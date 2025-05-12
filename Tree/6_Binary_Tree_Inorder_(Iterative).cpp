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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        TreeNode *Node = root;
        while(true){
            if(Node != nullptr){
                s.push(Node);
                Node = Node->left;
            }
            else{
                if(s.empty()) break;
                Node = s.top();
                s.pop();
                ans.push_back(Node->val);
                Node = Node->right;
            }
        }
        return ans;
    }
};
