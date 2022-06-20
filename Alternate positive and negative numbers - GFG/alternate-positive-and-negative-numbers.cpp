// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    stack<int>pos;
	    stack<int> neg;
	    int i ;
	    for(i = n-1 ; i >= 0 ; i--)
	    {
	        if(arr[i] >= 0)
	        pos.push(arr[i]);
	        else
	        neg.push(arr[i]);
	    }
	    int c = 1 ;
	    i = 0 ;
	    while(!pos.empty() and !neg.empty())
	    {
	       if(c %2 == 1)
	       {
	           arr[i] = pos.top();
	           pos.pop(); 
	       }
	       else
	       {
	           arr[i]= neg.top();
	           neg.pop();
	       }
	       c++; i++;
	    }
	    while(!pos.empty())
	    {
	         arr[i] = pos.top();
	           pos.pop();  i++;
	    }
	     while(!neg.empty())
	    {
	         arr[i] = neg.top();
	           neg.pop(); i++;
	    }
	    
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends