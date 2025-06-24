class LRUCache {

public:
// DLL Structure
struct LinkedList{
    int key,val;
    LinkedList *prev;
    LinkedList *next;  
    LinkedList(int k, int v) : key(k), val(v), next(nullptr), prev(nullptr) {}
    
};

//Global Variables
int size;
int count;
LinkedList *head;
LinkedList *tail;

unordered_map<int,LinkedList *> cache;

//LRU Cache 
    LRUCache(int capacity) {

        head = new LinkedList(0,0);
        
        head->prev=NULL;
        tail = new LinkedList(0,0);
        head->next=tail;
        tail->prev = head;
        tail->next=NULL;

        count = 0;
        size = capacity;
    }
void remove(LinkedList *p){
    p->next->prev = p->prev;
    p->prev->next = p->next;
}

//as insert is only after head
void insert(LinkedList *p){
p->next=head->next;
p->prev=head;
//if(head->next) 
head->next->prev = p;
head->next=p;
}
//Get function
    int get(int key) {
        if(cache.find(key) != cache.end()){
            LinkedList *p = cache[key];
            remove(p);
            insert(p);
            return p->val;
        }

        return -1;

    }
    
    void put(int key, int value) {

        if(cache.find(key) != cache.end()){
            LinkedList *p = cache[key];
            p->val = value;
            remove(p);
            insert(p);
        }
        else {
            if(count == size){
            LinkedList *p = tail->prev;
            remove(p);
            cache.erase(p->key);
            delete p;

        }
        else{count++;}
        LinkedList *p = new LinkedList(key,value);
        cache[key] = p;
        insert(p);
        
        }
    }
};


// https://leetcode.com/problems/lru-cache/description/
// Hell of implementation

// understand how LRU works 

// Use DLL and Hashset

// Linking Hashset to DLL with key value pairs is amazing

// LRU Understanding : https://www.youtube.com/watch?v=S6IfqDXWa10&t=644s

// Has to revise multiple times
