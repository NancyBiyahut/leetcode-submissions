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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0);
          ListNode *x = new ListNode(0);
      dummy->next = x ;
        int carry = 0 ;
        while(l1 and l2)
        { 
              ListNode *ans = new ListNode(0);
              int p =  carry +(l1->val + l2->val) ;
               if( p> 9)
               {
                   carry = p/10 ;
            ans->val= (p%10);
               }
            else
            { carry = 0 ; ans->val = p;}
            x->next = ans;
            x = x->next ;
                l1 = l1->next ; l2 = l2->next ;
        }
        while(l1)
        {
          ListNode *ans = new ListNode(0);
            int p =  carry +(l1->val);
             if( p> 9)
               {
                   carry = p/10 ;
            ans->val= (p%10);
               }
            else
            { carry = 0 ;   ans->val = p;}
            x->next = ans;
            x = x->next ;
             l1 = l1->next;
            
        }
         while(l2)
        {
         ListNode *ans = new ListNode(0);
            int p =  carry +(l2->val);
             if( p> 9)
               {
                   carry = p/10 ;
            ans->val= (p%10);
               }
            else
            { carry = 0 ; ans->val = p;}
            x->next = ans;
            x = x->next ;
             l2 = l2->next;
             
        }
       if(carry != 0)
       {
           ListNode *ans = new ListNode(0);
           ans->val = carry;
           x->next = ans;
       }  
        return dummy->next->next ;
    }
};