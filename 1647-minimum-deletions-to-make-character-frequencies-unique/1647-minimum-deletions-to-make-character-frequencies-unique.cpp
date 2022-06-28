class Solution {
public:
    int minDeletions(string s) {
        vector<int>v(26);
        for(int i = 0 ; i < s.length() ; i++)
        {
            v[s[i] - 'a'] ++;
        }
         sort(v.rbegin(),v.rend());
         int f=v[0];
        int ans=0;
         for(auto a: v) {
             if( a > f)
             {
                    if(f>0)
                        ans  += a-f;
             else
                 ans += a;
             }
         f=min(f-1,a-1);
    }
        return ans ;
    }
        
};


/*
  vector<int>v(26); //creating a vector of  size 26
        for(auto a:s){ 
            v[a-'a']++; //now we will go to each char of s and increment frequency
        }
        //sorting frequencies in descending order
        sort(v.rbegin(),v.rend());
        //keeping f as greatest frequency (max)
        int f=v[0];
        int ans=0;
        for(auto a: v) {
            if(a>f) // if this frequency is greater than max allowed freq
            {
                if(f>0)
                    ans+=(a-f); // lower downing the freq of current element to f
                else ans+=a; //if it is smaller than or equal to zero we have to delete
            }
            f=min(f-1,a-1); //reducing max allowed freq
        }
        return ans;
        */