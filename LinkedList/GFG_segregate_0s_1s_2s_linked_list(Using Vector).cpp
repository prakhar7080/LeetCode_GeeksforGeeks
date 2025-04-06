/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        vector<int>arr;
        Node *temp = head;
        while(temp){
            arr.push_back(temp->data);
            temp = temp->next;
        }
        std::sort(arr.begin(),arr.end());
        temp = head;
        for(int i=0;i<arr.size();i++){
            temp->data = arr[i];
            temp = temp->next;
        }
        return head;
    }
};
