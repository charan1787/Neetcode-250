//Solution 1
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *p=head;
        while(p){
            p=p->next;
            count++;
        }

        int loop = count - n;
        if (n == count) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        p=head;
        for(int i=1;i<loop;i++){
            p=p->next;
        }

        ListNode *q=p->next;
        p->next=q->next;
        delete q;

        return head;



    }
};

//Solution 2


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *left=head;
        ListNode *right=head;

        for(int i=0;i<n;i++){
            right=right->next;
        }
        if(!right) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        while(right->next){
            right=right->next;
            left=left->next;
        }

        ListNode *temp;
        temp=left->next;
        left->next=temp->next;
        delete temp;

        return head;

    }
};

//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/1673099677/

// Use fast and slow pointer to identify deleting node

// Then delete it
