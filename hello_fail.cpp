#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3;
    int sum = a + b;
    if(sum == 10) {
        cout << "Success!";
        return 0;
    } else {
        cerr << "❌ Test failed: sum is not 10\n";
        return 1; // This will fail
    }
}
