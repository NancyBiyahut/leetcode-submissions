// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int l = 0, r = n-1, mid, ans = arr[0];
        while(l < r){
            mid = l + (r-l)/2;
            if(arr[0] < arr[mid])
                l = mid+1;
            else
                r = mid;
        }
        ans = min(ans, arr[mid]);
        if(mid-1 >= 0)
            ans = min(ans, arr[mid-1]);
        if(mid+1 < n)
            ans = min(ans, arr[mid+1]);
        return ans;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}  // } Driver Code Ends