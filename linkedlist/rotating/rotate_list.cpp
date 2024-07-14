/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL || k == 0)
            return head;

        int len = 1;
        ListNode *tail = head;

        while(tail->next != NULL)
        {
            tail = tail->next;
            len++;
        }
        tail->next = head;

        ListNode *newTail = head;

        int len1 = 0;
        while(len1 < len - k % len - 1)
        {
            newTail = newTail->next;
            len1++;
        }

        ListNode *newhead = newTail->next;
        newTail->next = NULL;

        return newhead;
    }
};
