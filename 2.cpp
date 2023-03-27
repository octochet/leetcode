class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* x = new ListNode(0);
        ListNode* res = x;
        int sum=0, carry=0;
        while(l1!=nullptr || l2!=nullptr || carry>0) {
            sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum/10;
            sum = sum%10;
            x->next = new ListNode(sum);
            x = x->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return res -> next;
    }
};