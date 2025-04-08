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
        vector<Node *>visited;
        while(temp){
            for(int i=0;i<visited.size();i++){
                if(visited[i] == temp){
                    return true;
                }
            }
            visited.push_back(temp);
            temp = temp->next;
        }
        return false;
    }
};
