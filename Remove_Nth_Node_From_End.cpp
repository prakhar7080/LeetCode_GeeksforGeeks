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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode *tempNode = head;
        while(tempNode){
            size++;
            tempNode = tempNode->next;
        }
        if(n>size || !head) return head;
        if (n == size) {
            ListNode* ptr = head;
            head = head->next;
            delete ptr;
            return head;
        }
        ListNode *temp1 = head;
        ListNode *temp2 = head;
        int num = n+1;
        while(num-- && temp1){
            temp1 = temp1->next;
        }
        while(temp1){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        ListNode *ptr = temp2->next;
        temp2->next = temp2->next->next;
        delete ptr;
        return head;
    }
};
