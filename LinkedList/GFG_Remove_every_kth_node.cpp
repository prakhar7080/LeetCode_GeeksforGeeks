class Solution {
  public:
    Node* deleteK(Node* head, int k) {
    if (head == NULL || k == 0){
        return head;
    }
    else if(k == 1){
        return NULL;
    }
    else{
       int count = 1;
       Node* curr = head;
       Node* pre = NULL;
       while(curr){
           if(count == k){
               pre->next = curr->next;
               delete curr;
               curr = pre->next;
               count=1;
           }
           else{
               pre = curr;
               curr = curr->next;
               count++;
           }
       }
       return head;
    }
    }
};
