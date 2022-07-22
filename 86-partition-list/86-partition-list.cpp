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
    ListNode* partition(ListNode* head, int x) {
     
        ListNode node1(0) , node2(0);
        ListNode * p= &node1 , *q = &node2;
        while(head)
        {
            if(head->val < x)
               p =  p->next = head ;
            else
               q = q->next = head;
            head = head->next;
        }
        p->next = node2.next ;
        q->next = NULL;
        return  node1.next;
    }
};
