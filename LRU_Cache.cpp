class LRUCache {
public:
    class Node{
        public:
        int key, value;
        Node* next;
        Node* prev;
        Node(int k, int v){
            key = k;
            value = v;
            prev = next = NULL;
        }
    };

    Node *head = new Node(-1,-1);
    Node *tail = new Node(-1,-1);

    unordered_map<int, Node*>m;
    int limit;

    void addNode(Node *newNode){
        Node *oldNext = head->next;
        head->next = newNode;
        oldNext->prev = newNode;

        newNode->next = oldNext;
        newNode->prev = head;
    }

    void delNode(Node *oldNode){
        Node *oldPrev = oldNode->prev;
        Node *oldNext = oldNode->next;

        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }
    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(m.find(key) == m.end()){
            return -1;
        }

        Node *ansNode = m[key];
        int ans = ansNode->value;

        m.erase(key);
        delNode(ansNode);
        addNode(ansNode);
        m[key] = ansNode;
        return ans;
    }
    
    void put(int key, int value) {
    if(m.find(key) != m.end()){
        Node *oldNode = m[key];
        delNode(oldNode);
        delete oldNode;
        m.erase(key);
    }
    if(m.size() == limit){
        Node *lru = tail->prev;
        delNode(lru);
        m.erase(lru->key);
        delete lru;
    }

    Node *newnode = new Node(key, value);
    addNode(newnode);
    m[key] = newnode;
}

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
