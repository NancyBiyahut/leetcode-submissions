class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int lo = 0 ,mid;
        vector<int>ans;
        int hi = nums.size() - 1;
       if (nums.size() == 0) {
            return {-1, -1};
        }
    while (lo < hi) {
            int mid = lo + (hi - lo)/2;
            if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
    }
        if (nums[lo] != target) {
            return {-1, -1};
        }
         ans.push_back(lo);
        
        lo = 0;
        hi = nums.size() - 1;
        
		// Find the last position of the target element
        while (lo < hi) {
            int mid = lo + (hi - lo + 1)/2;
            if (nums[mid] > target) {
                hi = mid - 1;
            } else {
                lo = mid;
            }
        }
        
        ans.push_back(lo);
        return ans;
        
    }
};