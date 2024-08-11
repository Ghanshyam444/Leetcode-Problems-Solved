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
    ListNode* findCollision(ListNode *head1,ListNode* head2, int d)
    {
        ListNode* temp = head1;
        while(d--)
            temp = temp -> next;
        ListNode* t = head2;
        while(temp != t)
        {
            temp = temp -> next;
            t = t-> next;
        }
        if(temp == t) return temp;
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = NULL;
        int n1=0,n2=0;
        temp = headA;
        while(temp!=NULL)
        {
            n1++;
            temp = temp -> next;
        }
        temp = headB;
        while(temp!=NULL)
        {
            n2++;
            temp = temp -> next;
        }
        if(n1>n2)
        {
            return findCollision(headA,headB,n1-n2);
        }
        else
        {
            return findCollision(headB,headA,n2-n1);
        }
    }
};