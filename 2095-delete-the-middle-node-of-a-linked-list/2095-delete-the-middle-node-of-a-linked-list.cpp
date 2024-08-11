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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head -> next == NULL) return NULL;
    ListNode* p = head;
        int cnt = 0;
        while(p!=NULL)
        {
            cnt++;
            p = p -> next;
        }
        int n = cnt/2;
        p = head;
        ListNode *q = head;
        while(n--)
        {
            q = p;
            p = p -> next;
        }
        if(q!=NULL) q->next = p -> next;
        p -> next = NULL;
        delete p;
        return head;
    }
};