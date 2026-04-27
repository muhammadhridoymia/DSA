// Check Palindrome String
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    string s = "racecar";
    bool result = isPalindrome(s);

    if (result) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}