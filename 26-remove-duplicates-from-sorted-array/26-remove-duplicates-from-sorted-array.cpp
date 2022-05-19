class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        set<int>s;
        int n = arr.size();
        for(int i = 0 ; i < n ; i ++)
            s.insert(arr[i]);
        int i =  0 ; int p = s.size();
        for(auto it =s.begin() ; it != s.end(); it++){
         arr[i] = *it ; i++; }   
        return s.size() ;
    }
};