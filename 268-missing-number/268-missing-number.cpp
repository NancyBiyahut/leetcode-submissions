class Solution {
public:
    int missingNumber(vector<int>& nums) {
       long long l = 0 , j = 1  ;
        int n = nums.size();
        for(int i = 0 ; i < n ; i ++)
        {
            l = l + nums[i];
        }
        j = (n*(n+1))/2;
       // cout<<j<<" "<<l;
      return int(j - l);
    }
};