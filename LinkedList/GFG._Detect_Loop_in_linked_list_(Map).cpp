/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        Node *temp = head;
        unordered_map<Node*,bool>visited;
        while(temp){
            if(visited[temp] == 1){
                return true;
            }
            visited[temp] = 1;
            temp = temp->next;
        }
        return false;
    }
};
