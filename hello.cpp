#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4};  // Correct numbers to sum 10
    int sum = 0;

    for (int n : nums) {
        sum += n;
    }

    if (sum == 10) {
        std::cout << "✅ Test passed: sum is 10\n";
    } else {
        std::cout << "❌ Test failed: sum is not 10\n";
    }

    return 0;
}
