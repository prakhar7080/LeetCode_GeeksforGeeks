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
        int zeros = 0;
        int one = 0;
        int two = 0;
        Node *temp = head;
        while(temp){
            if(temp->data == 0) zeros++;
            else if(temp->data == 1) one++;
            else two++;
            temp = temp->next;
        }
        temp = head;
        while(temp){
            while(zeros--){
                temp->data = 0;
                temp = temp->next;
            }
            while(one--){
                temp->data = 1;
                temp = temp->next;
            }
            while(two--){
                temp->data = 2;
                temp = temp->next;
            }
        }
        return head;
    }
};
