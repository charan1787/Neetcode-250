
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *s=head;
        ListNode *f=head->next;;

        while(f && f->next){
            s=s->next;
            f=f->next->next;
        }
        
        ListNode *p=s->next;
        s->next=NULL;
        ListNode *q=s;
        ListNode *r=s;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        ListNode *a=head;
        ListNode *b=head;
        ListNode *l=q;
        ListNode *m=q;

        while(a){
            b=a->next;
            if(b==m) return;
            m=l->next;

            a->next=l;
            a=b;
            l->next=a;
            l=m;

        }

        return;

    }
};

// https://leetcode.com/problems/reorder-list/

// Break the list into 2 using slow and fast pointers

// reverse the second list

// merge 2 LL alternatively using 4 pointer
