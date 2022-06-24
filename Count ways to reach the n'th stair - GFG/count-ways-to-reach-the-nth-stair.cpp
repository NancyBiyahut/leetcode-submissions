// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
     int m = 1000000007;
    int solve(int n,vector<int>&dp){
       if(n==1||n==2||n==3){
           return n;
       }
       if(dp[n]!=-1) return dp[n];
      int res = solve(n - 1, dp) % m + solve(n - 2, dp) % m;
       dp[n] = res % m;
       return dp[n];
   }
   int countWays(int n)
   {
       // your code here
       vector<int>dp(n+1,-1);
       dp[0]=0;
       return solve(n,dp);
   }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends