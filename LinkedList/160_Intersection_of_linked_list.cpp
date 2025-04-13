/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA;
        bool flag = false;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = headA;
        ListNode *slow = headB;
        ListNode *fast = headB;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                flag = true;
                break;
            }
        }
        if(!flag){
            temp->next = NULL;
            return NULL;
        }
        slow = headB;
        while(slow != fast && fast){
            slow = slow->next;
            fast = fast->next;
        }
        temp->next = NULL;
        return slow;
    }
};
