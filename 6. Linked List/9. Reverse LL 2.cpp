
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0);
        dummy->next=head;

        ListNode *prev = dummy;
        ListNode *curr = head;

        for (int i = 1; i < left; i++) {
            prev = curr;
            curr = curr->next;
        }

        ListNode *q = curr;
        ListNode *r = nullptr;
        ListNode *next = nullptr;

        for (int i = 0; i <= right - left; i++) {
            next = curr->next;
            curr->next = r;
            r = curr;
            curr = next;
        }

     
        prev->next = r;
        q->next = curr;
        return dummy->next;
    }
};

// https://leetcode.com/problems/reverse-linked-list-ii/description/
// Reverse the in between array and connect to the ends
