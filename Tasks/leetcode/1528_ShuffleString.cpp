#include <iostream>
#include <vector>

class Solution {
public:
    std::string restoreString(std::string s, std::vector<int>& indices) {
        std::string result;
        result.resize(s.size());

        for (size_t i = 0; i < indices.size(); i++)
        {
            result[indices[i]] = s[i];
        }

        return result;
    }
};


int main() {
    Solution sol;
    auto s = "codeleet";
    std::vector<int> indices = { 4, 5, 6, 7, 0, 2, 1, 3 };

    auto result = sol.restoreString(s, indices);
    std::cout << result << std::endl;
}
