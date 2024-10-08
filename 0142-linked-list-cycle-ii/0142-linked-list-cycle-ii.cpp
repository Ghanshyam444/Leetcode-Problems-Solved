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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head-> next == head) return head;
        ListNode *fast=head,*slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow)
            {
                //there is a loop in this cycle
                slow = head;
                while (fast!=slow)
                {
                fast = fast -> next;
                slow = slow -> next;
                }
                return slow;
            }
        }
        return NULL;
    }
};