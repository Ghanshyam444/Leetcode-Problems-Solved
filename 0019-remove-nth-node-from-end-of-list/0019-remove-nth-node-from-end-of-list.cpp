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
        if(head == NULL || head -> next == NULL ) return NULL;
        int cnt = 0;
        ListNode* temp = head;
        while(temp)
        {
            cnt++;
            temp = temp -> next;
        }
        if(cnt == n)
        {
            ListNode* newHead = head -> next;
            delete head;
            return newHead;
        }
        int k = cnt - n;
        temp = head;
        ListNode * prev;
        while(k--)
        {
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = temp -> next;
        temp -> next = NULL;
        delete temp;
        return head;
        
    }
};