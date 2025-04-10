/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while (curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node* addTwoLists(Node* first, Node* second) {
        first = reverse(first);
        second = reverse(second);

        Node* head = NULL;
        Node* tail = NULL;
        int carry = 0;

        while (first || second || carry) {
            int sum = carry;
            if (first) {
                sum += first->data;
                first = first->next;
            }
            if (second) {
                sum += second->data;
                second = second->next;
            }
            Node* newNode = new Node(sum % 10);
            carry = sum / 10;

            if (!head) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
        }
        head = reverse(head);
        if (head && head->data == 0 && head->next != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }

        return head;
    }
};
