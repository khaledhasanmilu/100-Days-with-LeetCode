#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1) {
            return false; // Numbers less than 1 are not powers of two
        } else if (n == 1) {
            return true; // 1 is a power of two (2^0)
        } else {
            while (n % 2 == 0) { // Check divisibility by 2
                n = n / 2;       // Divide by 2
            }
            return n == 1;       // If reduced to 1, it's a power of two
        }
    }
};

int main() {
    Solution solution;
    int testNumber;
    cout << "Enter a number to check if it's a power of two: ";
    cin >> testNumber;

    if (solution.isPowerOfTwo(testNumber)) {
        cout << testNumber << " is a power of two." << endl;
    } else {
        cout << testNumber << " is not a power of two." << endl;
    }
    return 0;
    
}
