#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		for (int i = 1; i < nums.size(); i++) {
			nums[i] ^= nums[i - 1];
		}
		return nums[nums.size() - 1];
	}
};