// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{  // Code here
	    vector<pair<int,int>> V;
	    for(int i = 0;i<nums.size();i++)
	    {
	        V.push_back({nums[i], i});
	    }
	    sort(V.begin(), V.end());
	    int cnt = 0;
	    for(int i = 0;i<V.size();i++)
	    {
	        if(V[i].second==i)
	        {
	            continue;
	        }
	        else
	        {
	            swap(V[i], V[V[i].second]);
	            i--;
	            cnt++;
	        }
	    }
	    return cnt;
	
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends