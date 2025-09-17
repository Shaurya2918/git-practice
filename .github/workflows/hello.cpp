#include <iostream>
#include <vector>
#include <ranges>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    for (int x : nums | views::transform([](int n) { return n * n; })) {
        cout << x << " ";
    }

    return 0;
}
