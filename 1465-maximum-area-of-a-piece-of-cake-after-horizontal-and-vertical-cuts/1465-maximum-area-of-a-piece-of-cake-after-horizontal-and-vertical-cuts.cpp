class Solution {
public:
    int k = 1e9+7 ;
    int maxArea(int h, int w, vector<int>& hor, vector<int>& ver) 
    {
        sort(hor.begin() , hor.end());
        sort(ver.begin() , ver.end());
        vector<int>l;
        vector<int>r;
        int arr = 0; 
        int m = hor.size(); int n = ver.size();
        l.push_back(hor[0]) ; r.push_back(ver[0]);
        for(int i = 1 ; i < hor.size() ; i++)
            l.push_back(hor[i]-hor[i-1]);
         for(int i = 1 ; i < ver.size() ; i++)
            r.push_back(ver[i]-ver[i-1]);
        l.push_back(h - hor[m-1]);
        r.push_back(w - ver[n-1]);
        sort(l.begin() , l.end());
        sort(r.begin() , r.end());
       
       return (1LL*l[m]*r[n]) % 1000000007 ; 
    }
};