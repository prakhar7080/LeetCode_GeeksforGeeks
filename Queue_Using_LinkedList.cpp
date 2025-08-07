#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class Queue{
    Node *head;
    Node *tail;
    public:
    Queue(){
        head = tail = NULL;
    }
    
    void push(int data){
        Node *newnode = new Node(data);
        if(empty()){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    
    void pop(){
        if(empty()){
            cout<<"Queue is empty";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    
    int front(){
        if(empty()){
            cout<<"Queue is empty";
            return -1;
        }
        return head->data;
    }
    
    bool empty(){
        if(head == NULL){
            return true;
        }
        return false;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout << q.front() << endl;
}
