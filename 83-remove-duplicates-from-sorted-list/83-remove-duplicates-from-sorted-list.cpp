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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL ;
       ListNode* prev = head;
        if(!head->next) return head ;
        ListNode* curr = head->next ;
        while(curr->next)
        {
           if(curr->val == prev->val)
           {
             while(curr->next != NULL && curr->val == prev->val) 
                 curr=curr->next;
               prev->next = curr;continue;
           }
            prev =curr;
            if(curr->next)
            curr = curr->next ;
        }
         if(curr->val == prev->val)
             prev->next = NULL;
        return head;
    }
};