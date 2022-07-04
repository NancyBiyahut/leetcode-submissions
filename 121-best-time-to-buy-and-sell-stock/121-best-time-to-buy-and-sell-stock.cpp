class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minn = arr[0]  ;
        int maxx = 0 ;
        for(int i = 1  ; i< arr.size() ; i++)
        {
            minn = min(minn , arr[i]);
            maxx = max(maxx , abs(arr[i] - minn));
        }
        return maxx ;
    }
};