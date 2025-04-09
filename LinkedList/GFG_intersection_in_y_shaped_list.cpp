
// Linked list Node
/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        int count1 = 0;
        int count2 = 0;
        int extra;
        Node *temp1 = head1;
        while(temp1){
            count1++;
            temp1 = temp1->next;
        }
        Node *temp2 = head2;
        while(temp2){
            count2++;
            temp2 = temp2->next;
        }
        temp1 = head1;
        temp2 = head2;
        if(count1>count2){
            extra = count1-count2;
            while(extra--){
                temp1 = temp1->next;
            }
        }
        else{
            extra = count2-count1;
            while(extra--){
                temp2 = temp2->next;
            }
        }
        while(temp1 && temp2){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};
