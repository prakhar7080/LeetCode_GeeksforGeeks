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
        TreeNode *curr = root;
        stack<TreeNode*>s;
        while(curr!=nullptr || !s.empty()){
            if(curr != nullptr){
                s.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode *temp = s.top()->right;
                if(temp == nullptr){
                    temp = s.top();
                    s.pop();
                    ans.push_back(temp->val);
                    while(!s.empty() && temp == s.top()->right){
                        temp = s.top();
                        s.pop();
                        ans.push_back(temp->val);
                    }
                }
                else{
                    curr = temp;
                }
            }
        }
        return ans;
    }
};
