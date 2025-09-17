#include <iostream>
#include <string>

int main() {
    std::string expected = "hello";
    std::string actual = "world";  // Wrong on purpose

    if (expected == actual) {
        std::cout << "✅ Test passed: strings match\n";
    } else {
        std::cout << "❌ Test failed: strings do not match\n";
    }

    return 0;
}
