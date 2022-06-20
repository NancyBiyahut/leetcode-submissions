// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       long long int p = 1 ;
       vector<long long int>ans ;
       stack<long long int> st ;
       int flag = 0 ;
       reverse(nums.begin() , nums.end());
       for(int i = 0 ; i < n ; i ++)
       {
           st.push(nums[i]);
           if(nums[i] != 0)
           p = p * nums[i];
           else if ( flag == 0 and nums[i] == 0)
           flag = 1 ;
           else if(flag == 1 and nums[i] == 0)
           flag = 3;
       }
 if(flag == 3)
 {
     for (int i = 0 ; i< n ; i++)
     ans.push_back(0);
 }
 
 
 else{
       while(!st.empty())
       {   
          
          if(flag == 0)
          {
           ans.push_back((p/st.top()));
           st.pop();
          }
          if(flag == 1)
          {
              if(st.top() == 0)
              ans.push_back(p);
              else
              ans.push_back(0);
              st.pop();
          }
       }
 }
       return ans ;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends