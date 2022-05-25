class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr[0] ;
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