#include <iostream>
using namespace std;

class Solution {

public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        return x == reversed || x == reversed / 10;
    }
};

int main() {
    Solution solution;
    int x = 121;
    bool result = solution.isPalindrome(x);
    cout << "Is " << x << " a palindrome? " << (result ? "Yes" : "No") << endl;
    // Test with a negative number
    x = -121;
    result = solution.isPalindrome(x);
    cout << "Is " << x << " a palindrome? " << (result ? "Yes" : "No") << endl;
    // Test with a number that is not a palindrome
    x = 123;
    result = solution.isPalindrome(x);
    cout << "Is " << x << " a palindrome? " << (result ? "Yes" : "No") << endl;
    // Test with a single digit number
    x = 7;
    result = solution.isPalindrome(x);
    cout << "Is " << x << " a palindrome? " << (result ? "Yes" : "No") << endl;
    // cout << "Hello, world!" << endl;
    return 0;
}


