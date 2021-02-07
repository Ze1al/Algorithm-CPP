//
// Created by Ze1al on 2021/2/7.
//

#include "ListNode.h"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr, *tail = nullptr;
        int c = 0;
        while (l1 || l2) {
            int n1 = l1?l1->val:0;
            int n2 = l2?l2->val:0;
            int sum = n1 + n2 + c;
            int temp = sum % 10;
            if (!head) {
                head = tail = new ListNode(sum%10);
            } else {
                tail -> next = new ListNode(sum%10);
                tail = tail->next;
            }
            c = sum / 10;
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        if (c > 0) {
            tail -> next = new ListNode(c);
        }
        return head;
    }
};