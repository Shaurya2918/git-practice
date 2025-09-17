#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s = "hello";
    reverse(s.begin(), s.end());
    cout << s;  // Output: "olleh" ✅
    return 0;
}
