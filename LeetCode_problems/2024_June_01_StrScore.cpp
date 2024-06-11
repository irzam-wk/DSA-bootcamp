class Solution {
public:
    int scoreOfString(string s) {
        int size = s.length();
        int score = 0;
        for (int i=0; i<size-1; i++){
            score += abs(s[i]-s[i+1]);
        }
        return score;
    }
};