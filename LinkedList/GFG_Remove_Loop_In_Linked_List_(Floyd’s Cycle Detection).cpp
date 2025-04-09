/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        if(head == NULL)
            return;
        Node *slow = head;
        Node *fast = head;
        int count = 1;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                break;
            }
        }
        if(fast == NULL || fast->next == NULL)
            return;
        slow = slow->next;
        while(slow != fast){
            count++;
            slow = slow->next;
        }
        slow = head;
        fast = head;
        while(count--){
            fast = fast->next;
        }
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL;
    }
};
