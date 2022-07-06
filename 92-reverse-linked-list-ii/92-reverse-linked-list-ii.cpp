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
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ListNode *dummy = new ListNode(0);
        dummy->next = head ;
        ListNode * p , * q;
        p = dummy;
           for(int i = 0 ; i < left -1 ; i++)
               p = p->next ;
        q = p ->next;
         q = p -> next;
       for (int i = 0; i < right - left; i++) { 
        ListNode * temp =    p->next ;
          p -> next = q -> next;
           q -> next = q -> next -> next;
           p -> next -> next = temp;
       }
        return dummy->next ;
    }
};
/*
  ListNode *dummy = new ListNode(0), *pre = dummy, *cur;
       dummy -> next = head;
       for (int i = 0; i < m - 1; i++) {
           pre = pre -> next;
       }
       cur = pre -> next;
       for (int i = 0; i < n - m; i++) {
           ListNode* temp = pre -> next;
           pre -> next = cur -> next;
           cur -> next = cur -> next -> next;
           pre -> next -> next = temp;
       }
       return dummy -> next;*/