class Solution {
public:
    int findDuplicate(vector<int>& a) {
      unordered_map<int,int>mp;
        int n = a.size();
        for(int i = 0 ; i < n ; i ++)
          mp[a[i]]++;  
        for(auto it = mp.begin() ; it != mp.end() ; it++)
        {
           if(it->second >= 2)
               return it->first ;
        }
        return -1 ;
    }
};