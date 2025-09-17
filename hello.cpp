#include <iostream>
#include <vector>
#include <ranges>   // needed for std::views

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    // Print squares of numbers
    for (int x : nums | views::transform([](int n) { return n * n; })) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
