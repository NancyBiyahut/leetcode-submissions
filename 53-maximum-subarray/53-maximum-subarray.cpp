class Solution {
public:
    int maxSubArraySum(int l, int h, vector<int>& nums)
	{
		if (l == h)
			return nums[l];
		int left_part = INT_MIN, right_part = INT_MIN;
		int mid = (l + h) / 2;
		int cur = 0;
		for (int k = mid + 1; k <= h; k++)
		{
			cur += nums[k];
			right_part = max(right_part, cur);
		}
		cur = 0;
		for (int k = mid; k >= l; k--)
		{
			cur += nums[k];
			left_part = max(left_part, cur);
		}
		int cross_sum = left_part + right_part;
		int left_sum  = maxSubArraySum(l, mid, nums);
		int right_sum = maxSubArraySum(mid + 1, h, nums);
		return max( cross_sum , max(left_sum , right_sum) );
	}
	int maxSubArray(vector<int>& nums) {
		return maxSubArraySum(0, nums.size() - 1, nums);
	}
};