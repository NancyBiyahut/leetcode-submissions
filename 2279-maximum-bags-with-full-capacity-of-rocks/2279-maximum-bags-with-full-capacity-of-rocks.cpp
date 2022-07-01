class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int x) {
     int n = capacity.size();
        vector<int>v(n);
        int ans =0 ;
        for(int i = 0 ; i <n; i++)
        {
            v[i] = capacity[i] - rocks[i];
        }
        sort(v.begin() , v.end());
        for(int i = 0 ; i<n ; i++)
        {  
             if(v[i] != 0 and v[i] <= x)
             {
                 ans ++ ;
                 x -= v[i] ;
                
             }
            if(v[i] == 0)
                ans++;
        }
        return ans ;
    }
};