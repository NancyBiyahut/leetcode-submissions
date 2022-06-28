class Solution {
public:
    string reverseWords(string s) {
        stack<string>st ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
                   string p ;
            if(s[i] == ' ')
            {
                continue ;
            }
            while(i < s.length() && s[i] != ' ')
            {
               p += s[i];
                i++;  
            }
            st.push(p);
        }
          string res;
        
        while(!st.empty()){
            res += st.top() + " ";
            st.pop();
        }
        
        return res.substr(0,res.length() - 1);
    }
};





/*
 stack<string> st;
        
        for(int i = 0 ; i < s.length() ; i++){
            string temp;
            if(s[i] == ' '){
                continue;
            }
            while(i < s.length() && s[i] != ' ')
            {
                temp += s[i];
                i++;
            }
            st.push(temp);
        }
        
        string res;
        
        while(!st.empty()){
            res += st.top() + " ";
            st.pop();
        }
        
        return res.substr(0,res.length() - 1);
        */