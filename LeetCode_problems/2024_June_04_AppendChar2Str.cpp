class Solution {
public:
    int appendCharacters(string s, string t) {
        const int s_len = s.length();
        const int t_len = t.length();
        int i=0, j=0;
        while (i<s_len && j<t_len){
            if (s[i]==t[j]){
                j++;
            }
            i++;
        }
        return t_len-j;
    }
};
