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
    bool parent(TreeNode* root, int x, int y){
        if(root == nullptr){
            return 0;
        }
        if(root->left && root->right){
            if(root->left->val == x && root->right->val == y){
                return 1;
            }
            if(root->left->val == y && root->right->val == x){
                return 1;
            }
        }
        return parent(root->left,x,y) || parent(root->right,x,y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);
        int l1 = -1, l2 = -1;
        int level = 0;
        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode *Node = q.front();
                q.pop();
                if(Node->val == x){
                    l1 = level;
                }
                if(Node->val == y){
                    l2 = level;
                }
                if(Node->left){
                    q.push(Node->left);
                }
                if(Node->right){
                    q.push(Node->right);
                }
            }
            level++;
            if(l1 != l2){
                return 0;
            }
            if(l1 != -1){
                break;
            }
        }
        
        return !parent(root,x,y);
    }
};
