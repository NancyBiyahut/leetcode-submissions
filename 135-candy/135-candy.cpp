class Solution {
public:
    int candy(vector<int>& arr) {
        int n = arr.size();
    vector<int>can(n,1);
        if(n == 1)
            return 1 ;
        for(int i = 1 ; i < n ; i++)
        {
            if(arr[i]>arr[i-1] && can[i] <= can[i-1])
                can[i]  = can[i-1] +1 ;
            }
        for(int i = n-2 ; i >= 0 ; i--)
        {
       if(arr[i] > arr[i+1] && can [i] <= can[i+1] )
           can[i] = can[i+1] +1 ;
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i ++)
            ans += can[i];
        
        return ans;
    }
};