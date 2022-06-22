// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or
     bool func(vector<vector<int> >& M, int i,int n){
       for(int j=0;j<n;j++){
           if(M[i][j]==1)return false;
       }
       return true;
   }
    int celebrity(vector<vector<int> >& mat, int n) 
    {  int flag = -1 , count = 0  ,i,j;
        for( j = 0 ; j < n ; j ++)
        {
          for( i = 0 ;  i < n ; i ++)
          {
              if(mat[i][j] == 1)
              count ++ ;
          }
         // cout<<count<<endl;
          if(count == n-1 && func(mat , j , n))
          {
          flag = j ; break;
          }
          else
          count = 0 ;
          
        }
        return flag ;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends