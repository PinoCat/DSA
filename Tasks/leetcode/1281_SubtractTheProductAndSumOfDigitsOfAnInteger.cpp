#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        for (; n != 0; n = n / 10) {
            int val = n % 10;

            product *= val;
            sum += val;

            std::cout << n << " : " << val << std::endl;
        }

        return product - sum;
    }
};


int main() {
    Solution sol;

    std::cout << sol.subtractProductAndSum(234) << std::endl;
    std::cout << sol.subtractProductAndSum(4421) << std::endl;
}
