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
    Node* segregate(Node* head){
        Node *head0 = new Node(0);
        Node *temp0 = head0;
        Node *head1 = new Node(0);
        Node *temp1 = head1;
        Node *head2 = new Node(0);
        Node *temp2 = head2;
        Node *temp = head;
        while(temp){
            if(temp->data == 0){
                temp0->next = temp;
                temp0 = temp0->next;
                
            }
            else if(temp->data == 1){
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else{
                temp2->next = temp;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        temp2->next = NULL;
        temp1->next = head2->next;
        temp0->next = head1->next;
        return head0->next;
    }
};
