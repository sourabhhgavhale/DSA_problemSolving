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
    int getDecimalValue(ListNode* head) {

        if(head == NULL)
            return 0;
        
        if(head->next == NULL)
            return head->val;

        int pw = 0;
        int res = 0;
        ListNode *curr = head;

        while(curr)
        {
            res = res * 2 + curr->val; 
            curr = curr->next;
        }

        return res;
    }
};

