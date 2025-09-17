#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3;
    int sum = a + b;
    if(sum == 5) {
        cout << "Success!";
        return 0;
    } else {
        return 1; // This won't happen
    }
}
