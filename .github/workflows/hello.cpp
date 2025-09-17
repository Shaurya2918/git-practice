#include <iostream>
#include <vector>
#include <ranges>   // Needed for views::transform
using namespace std;
using namespace std::ranges;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    // Using C++20 ranges
    for (int x : nums | views::transform([](int n) { return n * n; })) {
        cout << x << " ";
    }

    return 0;
}
