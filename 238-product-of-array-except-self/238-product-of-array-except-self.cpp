class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int p = 1 ;
        vector<int>ans ;
        int flag = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
            
        {  
            if(nums[i] != 0)
            p = p *nums[i];
             if(nums[i] == 0)
                 flag++;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {  
            if(flag == 1)
        {
            
            if(nums[i] != 0)
             ans.push_back(0);
         else
            ans.push_back(p);
        }
         if(flag == 0 )
         {
ans.push_back(p / nums[i]);
         }
         if(flag > 1)
         {ans.push_back(0);
         }
        }
        
       // cout<<flag;
        return ans ;
        
    }
};