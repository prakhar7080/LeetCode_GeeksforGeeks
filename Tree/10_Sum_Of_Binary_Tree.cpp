/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
  int total(Node *root){
      if(root == nullptr){
          return 0;
      }
      else{
          return root->data + total(root->left) + total(root->right);
      }
  }
    int sumBT(Node* root) {
        return total(root);
        
    }
};
