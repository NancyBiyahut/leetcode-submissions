class Solution {
public:
    string func(string x,string y){
        int i=0, j=0;
        while(i<x.length() && j<y.length()){
            if(x[i]!=y[j]){
                break;
            }
            i++;
            j++;
        }
        return x.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs) {
      string prefix=strs[0];
        for(string s:strs){
            prefix=func(prefix,s);
        }
        return prefix;
    }
};