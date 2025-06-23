class MyCircularQueue {
public:
    struct LinkedList{
            int val;
            LinkedList *next;
            LinkedList(int x) : val(x), next(nullptr) {}
        };

        int size;
        int count;
        LinkedList* head;
        LinkedList* front;
        LinkedList* rear;

    MyCircularQueue(int k) {
        front = NULL;
        size = k;
        head = NULL;
        rear = NULL;
        count = 0;
    }
    
    bool enQueue(int value) {
        LinkedList *t = new LinkedList(value);
        t->next=NULL;
        if(count==size) return false;
        if(head == NULL){
            head=t;
            front = rear = head;
            rear->next=head;
            count++;
        }
        else{
            rear->next = t;
            rear = rear->next;
            rear->next=head;
            count++;
        }

        return true;
    };
    
    bool deQueue() {

        // add condition for empty list
        if(head == NULL) return false;
        if(count ==1){
            delete front;
            head=front=rear=NULL;
            count--;
            
        }else{
        head = head->next;
        rear->next = head;
        delete front;
        front = head;
        count--;}

        return true;
    };
    
    int Front() {
        if(isEmpty()) return -1;
        return front->val;
    };
    
    int Rear() {
        if(isEmpty()) return -1;
        return rear->val;
    }
    
    bool isEmpty() {
        if(head==NULL) return true;
        else return false;
    };
    
    bool isFull() {
        if(count==size) return true;
        else return false;
    };
};

// https://leetcode.com/problems/design-circular-queue/

// Understamd the implementation of the problem

// its just Circular LL with Circular QUEUE concept

// Implement LL Structure
