/*
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Input: head = [1,2,2,1]
Output: true

Input: head = [1,2]
Output: false

*/

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
    bool helper(ListNode *(&start), ListNode *end)
    {
        if(end == NULL)
            return 1;
        
        bool res = helper(start, end->next) & (start -> val == end -> val);
        start = start->next;

        return res;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return 1;

        ListNode *start = head;
        return helper(start, head);
    }
};
