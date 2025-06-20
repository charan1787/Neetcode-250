
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p=head;
        ListNode *q=NULL;
        ListNode *r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;

        return head;
    }
};

//https://leetcode.com/problems/reverse-linked-list/

// Use 3 pointers p,q,r
// move each step forward and change q->next to r
// at last change head to q
