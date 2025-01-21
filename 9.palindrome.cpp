#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long n = x;
        long long revnum = 0;
        while (n > 0) {
            int digit = n % 10;
            revnum = revnum * 10 + digit;
            n = n / 10;
        }
        return revnum == x;
    }
};

int main() {
    Solution solution;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (solution.isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
