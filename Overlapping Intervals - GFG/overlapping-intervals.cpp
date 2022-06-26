// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& inter)
    {
         vector<vector<int>> ans ;
         sort(inter.begin() , inter.end());
         stack<pair<int,int>> st ;
         st.push({inter[0][0] , inter[0][1]});
         for(int i = 1 ; i < inter.size() ; i++)
         {
             if(st.top().second >= inter[i][0] )
             {
                 auto temp = st.top(); st.pop();
                 st.push({temp.first , max(temp.second , inter[i][1])}); 
                 
             }
             else
             st.push({inter[i][0] , inter[i][1]}) ;
             
         }
         while(!st.empty())
         {
             vector<int>v ;
             v.push_back(st.top().first);
              v.push_back(st.top().second);
              ans.push_back(v);
              st.pop();
         }
         reverse(ans.begin() , ans.end());
         return ans ;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends