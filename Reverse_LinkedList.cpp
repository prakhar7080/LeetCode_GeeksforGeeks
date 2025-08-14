/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode *temp = head->next;
        ListNode *prev = head;
        ListNode *ptr;
        while(temp){
            ptr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = ptr;
        }
        head->next = nullptr;
        return prev;
    }
};
