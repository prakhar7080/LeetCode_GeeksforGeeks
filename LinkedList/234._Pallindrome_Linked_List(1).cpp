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
        vector<int>arr;
        ListNode*ptr = head;
        while(ptr){
            arr.push_back(ptr->val);
            ptr = ptr->next;
        }
        int s = 0;
        int e = arr.size()-1;
        while(s<e){
            if (arr[s] != arr[e]) {
                return false;
            }   
            s++;
            e--;
        }      
        return true;
    }

};
