class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr[0] ;
      int lo = 0 ; int hi = n-1 ;
        while(lo < hi){
           int  mid = lo + (hi-lo)/2;
            if(arr[hi] < arr[mid])
                lo = mid + 1;  
            else
                hi = mid ;
        } 
       
        return arr[hi];
    }
};