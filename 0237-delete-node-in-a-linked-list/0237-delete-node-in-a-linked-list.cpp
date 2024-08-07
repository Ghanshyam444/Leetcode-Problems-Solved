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
        struct ListNode* p;
        while(node -> next)
        {
            p = node;
            node -> val = node -> next -> val;
            node = node -> next;
        }
        p -> next = NULL;
    }
};