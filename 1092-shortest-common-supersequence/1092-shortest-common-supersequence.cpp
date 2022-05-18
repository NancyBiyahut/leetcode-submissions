class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
         string ans = "";
        int m = str1.length();
        int n = str2.length();
        int t[m + 1][n + 1]; 
        for (int i = 0;i < m + 1;i++){
            for (int j = 0;j < n + 1;j++){
                if (i == 0 || j == 0)
                    t[i][j] = 0;
                else if (str1[i - 1] == str2[j - 1]){
                    t[i][j] = t[i - 1][j - 1] + 1;
                }
                else{
                    t[i][j] = max(t[i][j - 1], t[i - 1][j]); 
                    
                }
            }
        }

        int i = m;
        int j = n;

        while (i > 0 && j > 0){
            if (str1[i - 1] == str2[j - 1]){
                ans = str1[i - 1] + ans;
                i--;j--;
            }
            else{
                if (t[i][j - 1] >= t[i - 1][j]){
                    ans = str2[j - 1] + ans;
                    j--;
                }
                else{
                    ans = str1[i - 1] + ans;
                    i--;
                }
            }
        }

        while (i > 0){
            ans = str1[i - 1] + ans;
            i--;
        }
        while (j > 0){
            ans = str2[j - 1] + ans;
            j--;
        }

        return ans;
    }
};