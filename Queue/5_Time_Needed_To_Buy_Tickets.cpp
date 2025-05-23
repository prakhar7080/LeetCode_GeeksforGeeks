class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        int count=0;
        while(tickets[k] != 0){
            tickets[q.front()]--;
            count++;
            if(tickets[q.front()] != 0){
                q.push(q.front());
            }
            q.pop();
        }
        return count;
    }
};
