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
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {
        vector<int>ans;
        ans.push_back(head->data);
        Node*temp = head->next;
        while(temp){
            if(ans[ans.size()-1]!=temp->data){
                ans.push_back(temp->data);
            }
            temp = temp->next;
        }
        temp = head;
        int index = 0;
        while(index<ans.size()){
            temp->data = ans[index];
            index++;
            temp = temp->next;
        }
        temp = head;
        int n = 1;
        while(n<ans.size()){
            temp = temp->next;
            n++;
        }
        temp->next = NULL;
        return head;
    }
};
