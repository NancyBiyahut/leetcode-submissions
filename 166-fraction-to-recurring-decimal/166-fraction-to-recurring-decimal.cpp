class Solution {
public:
    string fractionToDecimal(int n, int d) {
     string ans;
        map<int,int>mp;
        if(n == 0) return (ans+= to_string(0));
      if (n < 0 ^ d < 0) ans += '-';

   
        n = abs(n), d = abs(d);
         cout<<d<<"  "<<n;   
       long long  int q = n/d;
       long long int r = n%d;
        ans += to_string(q);
        if(r == 0)
        return ans ;
        else
        {
            ans += ".";
            while(r != 0)
            {
                if(mp.find(r) == mp.end())
                {
                mp[r] = ans.length();
                r = r*10;
                q = r / d ;
                r = r % d ;
                ans += to_string(q);
                }
                else
                {
                   int pos = mp[r];
                    ans.insert(pos , "(");
                    ans += ")";
                    break;
                }
            }
            
        }
        return ans;
    }
};