class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin() , s.end());
        int i =0 ;
        
        while(s[i] == ' ')
            i++;
        int length = 0;
       while(s[i] != ' ' and i < s.length()){
            length++; i++;}
        
        return length;
    }
};