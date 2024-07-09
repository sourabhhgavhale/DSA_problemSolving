/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        if  (!node)
            return;

        ListNode *curr = node;
        ListNode *prev = new ListNode(-1);
        prev->next = curr;

        while(curr && curr->next)
        {
            curr->val = curr->next->val;
            curr = curr->next;
            prev = prev->next; 
        }

        prev->next = NULL;
    }
};
