#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted(heights);
        sort(sorted.begin(), sorted.end());
        int counter = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != sorted[i]) {
                counter++;
            }
        }
        return counter;
    }
};