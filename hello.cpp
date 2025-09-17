#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    // Print squares using C++23 views
    for (int x : nums | std::views::transform([](int n) { return n * n; })) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    // Print squares using C++23 views
    for (int x : nums | std::views::transform([](int n) { return n * n; })) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
// trigger workflow
