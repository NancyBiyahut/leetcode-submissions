class Solution {
public:
    int jump(vector<int>& nums) {
       int jump = 0 , max_reach = 0 , curr = 0 ;
        for(int i = 0 ; i < nums.size() -1 ; i++)
        {
            max_reach = max(max_reach , nums[i] + i);
            if(i == curr)
            {
                curr = max_reach ;
            jump++ ;
            }
        }
        return jump; 
    }
};