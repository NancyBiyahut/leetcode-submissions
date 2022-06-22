// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int countTriplets(struct Node* head, int x) ;

/* Driver program to test count function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}// } Driver Code Ends


//User function Template for C++

int countTriplets(struct Node* head, int x) 
{ 
    int count = 0; 
   struct Node * p = head ;
   struct Node * q = head ;
    unordered_map<int, bool> m;
   while(p)
   {
          m[p->data]=true;
       p = p->next;
   }
   p = head ;
   while(p->next != NULL)
   {   
       
       q = p->next  ;
    while(q)
       {
           int s = x -( p->data+q->data);
           if( m[s] and s != p->data and s != q->data and 
           s > q->data and s > p->data)
           count++;
           q = q->next;
       }
       p = p->next ;
   }
   return count ;
} 