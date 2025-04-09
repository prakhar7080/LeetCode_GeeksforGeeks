
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
        Node *temp1 = head1;
        Node *temp2 = head2;
        while(temp1->next){
            temp1 = temp1->next;
        }
        temp1->next = head1;
        temp1 = head2;
        temp2 = head2;
        while(temp2 && temp2->next){
            temp1 = temp1->next;
            temp2 = temp2->next->next;
            if(temp1 == temp2){
                break;
            }
        }
        temp2 = head2;
        while(temp1!=temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};
