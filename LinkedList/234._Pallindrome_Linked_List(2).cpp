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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL){
            return true;
        }
        int count = 0;
        ListNode*temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        count/=2;
        ListNode*pre = NULL;
        ListNode*curr = head;
        while(count--){
            pre = curr;
            curr = curr->next;
        }
        pre->next = NULL;
        pre = NULL;
        ListNode*present = curr;
        ListNode*future = curr->next;
        while(present){
            future = present->next;
            present->next = pre;
            pre = present;
            present = future;
        }
        ListNode*head1 = head;
        ListNode*head2 = pre;
        while(head1){
            if(head1->val!=head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }

};
