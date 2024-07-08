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
    ListNode* GetMid(ListNode *start)
    {
        if(start == NULL || start->next == NULL)
            return start;

        ListNode *fastptr = start;
        ListNode *slowptr = start;
        ListNode *temp = slowptr;

        while(fastptr != NULL && fastptr->next != NULL)
        {
            temp = slowptr;
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
        }

        temp->next = NULL;

        return slowptr;
    }

    ListNode* mergelist(ListNode *l1, ListNode *l2)
    {
        ListNode *temp = new ListNode(-1);
        ListNode *curr = temp;

        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                curr->next = l1;
                l1 = l1->next;
            }
            else
            {
                curr->next = l2;
                l2 = l2->next;
            }

            curr = curr->next;
        }

        if (l1)
        {
            curr->next = l1;
        }
        else
        {
            curr->next = l2;
        }

        return temp->next;
    }

    ListNode* sortList(ListNode* head) {
        
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *mid = GetMid(head);
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);

        return mergelist(left, right);
    }
};
