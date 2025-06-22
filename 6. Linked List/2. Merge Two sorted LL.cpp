
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = NULL;
        ListNode *last = head;
        
        ListNode *p = list1;
        ListNode *q = list2;

        if(!p) return q;
        if(!q) return p;

        if (p->val <= q->val) {
            head = last = p;
            p = p->next;
        } else {
            head = last = q;
            q = q->next;
        }

        while(p && q){
            if(p->val<=q->val){
                last->next=p;
                p=p->next;
                last=last->next;
                
            }
            else {
                last->next=q;
                q=q->next;
                last=last->next;
                
            }
        }

        while(p){
            last->next=p;
            last=last->next;
            p=p->next;
           
        }

        while(q){
            last->next=q;
            last=last->next;
            q=q->next;
            
        }
        return head;
    }
};

// https://leetcode.com/problems/merge-two-sorted-lists/description/

//Understand the implementation technique

// First find the head node i.e the smallest of list1 and list 2 
// then initialize both head and last to that.

// initialise p,q pointers to l1 and l2
// now compare the p, q pointers and update the last to the minimum number and move p or q
