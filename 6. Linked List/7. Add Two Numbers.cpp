
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(0);
        ListNode *ptr = result;

        ListNode *h1 = l1;
        ListNode *h2 = l2;
        int sum = 0;
        int carry = 0;
        while(h1 || h2){
            sum = carry;
            if(h1) {
                sum = sum + h1->val;
                h1 = h1->next;
            }

            if(h2){
                sum = sum + h2->val;
                h2 = h2->next;
            }

            carry = sum / 10;

            ListNode *temp = new ListNode(sum % 10);
            ptr->next = temp;
            ptr = ptr->next;

        }
        if(carry) {
            ListNode *temp = new ListNode(carry);
            ptr->next = temp;
            ptr = ptr->next;
        }
        return result->next;


    }
};

// https://leetcode.com/problems/add-two-numbers/
// Had to use the concept of sum and carry

// loop over each lists
// add the nodes - divide it as sum and carry
// add sum as each new node to the result list
