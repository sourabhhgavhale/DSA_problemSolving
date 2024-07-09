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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode * dummy = new ListNode(0);
        dummy->next = head;
        ListNode *fastptr = dummy;
        ListNode *slowptr = dummy;
        
        n = n+1;
        while(n && fastptr)
        {
            fastptr = fastptr->next;
            n--;
        } 

        while(fastptr)
        {
            fastptr = fastptr->next;
            slowptr = slowptr->next;
        }
        
        ListNode *temp;
        temp = slowptr->next;
        slowptr->next = slowptr->next->next;
        temp->next = NULL;
        delete temp;
        
        return dummy->next;
    }
};
