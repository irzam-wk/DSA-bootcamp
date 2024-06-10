class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        int index = 0;
        for (auto it=heights.begin(); it!=heights.end(); it++)
            expected.push_back(*it);
        sort(begin(expected), end(expected));
        for (int i=0; i<expected.size(); i++){
            if (expected[i] != heights[i])
                index++;
        }
        return index;
    }
};
