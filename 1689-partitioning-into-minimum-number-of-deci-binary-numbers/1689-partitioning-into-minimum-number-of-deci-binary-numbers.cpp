class Solution {
public:
    int minPartitions(string n) {
        int maxx = 0 ;
        for(int i = 0 ; i < n.length() ; i++)
        {
           maxx = max(maxx , int(n[i]) - '0');
        }
        return maxx;
    }
};