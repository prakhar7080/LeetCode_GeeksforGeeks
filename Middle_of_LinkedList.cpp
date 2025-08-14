// Using for Loop
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode *slow = head;
//         ListNode *fast = head;
//         while(fast && fast->next){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

// Recursion
class Solution {
public:
    ListNode *middile(ListNode *slow, ListNode *fast){
        if(!fast || !fast->next) return slow;
        return middile(slow->next,fast->next->next);
    }
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        return middile(slow,fast);
    }
};
