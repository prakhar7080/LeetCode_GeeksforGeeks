// User function Template for C++
/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int count_nonleaf(Node *root){
        if(root == NULL){
            return 0;
        }
        else if(root->left == NULL && root->right == NULL){
            return 0;
        }
        return 1 + count_nonleaf(root->left) + count_nonleaf(root->right);
    }
    int countNonLeafNodes(Node* root) {
        return count_nonleaf(root);
    }
};
