class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p=head;
        ListNode *q=head;

        if(!p || p->next == NULL) return false;

        while(q && q->next){
            p=p->next;
            q=q->next->next;

            if(p==q) return true;
        }

        return false;
    }
};

// https://leetcode.com/problems/linked-list-cycle/description/

// Be careful to check with 1 value LL and empty LL

// use slow and fast pointers
// then check the condition in the while loop. 
