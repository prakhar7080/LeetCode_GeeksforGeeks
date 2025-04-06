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
        Node *temp1 = head1;
        Node *temp2 = head2;
        Node *ans = NULL;
        Node *anstemp = NULL;
        while(temp1 && temp2){
            if(temp1->data < temp2->data){
                if(ans == NULL){
                    ans = temp1;
                    anstemp = ans;
                }
                else{
                    anstemp->next = temp1;
                    anstemp = anstemp->next;
                }
                temp1 = temp1->next;
            }
            else{
                if(ans == NULL){
                    ans = temp2;
                    anstemp = temp2;
                }
                else{
                    anstemp->next = temp2;
                    anstemp = anstemp->next;
                }
                temp2 = temp2->next;
            }
        }
        while(temp1){
            if(anstemp){
                anstemp->next = temp1;
                anstemp = anstemp->next;
            }
            else{
                ans = temp1;
                anstemp = ans;
            }
            temp1= temp1->next;
        }
        while(temp2){
            if(anstemp){
                anstemp->next = temp2;
                anstemp = anstemp->next;
            }
            else{
                ans = temp2;
                anstemp = ans;
            }
            temp2 = temp2->next;
        }
        return ans;
    }
}
