/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        Node*temp = head;
        while(temp && temp->next){
            if(temp->data == temp->next->data){
                Node*ptr = temp->next;
                temp->next = temp->next->next;
                delete ptr;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};
