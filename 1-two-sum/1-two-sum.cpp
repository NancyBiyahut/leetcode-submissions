class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
       vector<int>ans;
        unordered_map<int,int>mp;
        int n = arr.size();
        for(int i = 0 ; i < n ;i++)
        {
if(mp.find(k - arr[i]) != mp.end())
{
ans = {i , mp[k-arr[i]]}; return ans;
}
            else{
mp[arr[i]] = i ;
            }
        }
        
        return ans;
    }
};
