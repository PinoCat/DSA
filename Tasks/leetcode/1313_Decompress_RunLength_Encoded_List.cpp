#include <iostream>
#include <vector>

class Solution {
public:
	std::vector<int> decompressRLElist(std::vector<int>& nums) {
		std::vector<int> result;

		for (int i = 0; i < nums.size(); i += 2) {
			for (int j = 0; j < nums[i]; ++j) {
				result.emplace_back(nums[i + 1]);
			}
		}

		return result;
	}
};


int main()
{
	Solution sol;

	std::vector<int> nums = { 1, 1, 2, 3 };
	auto resultVec = sol.decompressRLElist(nums);

	for (int i = 0; i < resultVec.size(); ++i) {
		std::cout << resultVec[i] << ", ";
	}

	std::cout << std::endl;
}
