class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
          int n=nums.size();
       unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        
        int count = 0;
        for(auto it : mp)
        { count +=it.second/2;
            
        }
            vector<int>ans;
        ans.push_back(count);
        ans.push_back(n-(2*count));
        return ans;
    }
};
