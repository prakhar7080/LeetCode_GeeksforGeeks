/* Link list Node
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
    Node* sortedMerge(Node* head1, Node* head2) {
        Node *head = new Node(0);
        Node *temp = head;
        while(head1 && head2){
            if(head1->data<head2->data){
                temp->next = head1;
                temp = temp->next;
                head1 = head1->next;
            }
            else{
                temp->next = head2;
                temp = temp->next;
                head2 = head2->next;
            }
        }
        if(head1){
            temp->next = head1;
        }
        if(head2){
            temp->next = head2;
        }
        temp = head;
        head = head->next;
        delete temp;
        return head;
    }
};
