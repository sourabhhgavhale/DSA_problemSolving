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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head)
            return head;

        ListNode* curr = head;
        ListNode* next = head->next;

        while(next)
        {
            if(curr->val != next->val)
            {
                curr = curr->next;
                curr->val = next->val;
            }

            next = next->next;
        }

        curr->next = NULL;

        return head;
    }
};
