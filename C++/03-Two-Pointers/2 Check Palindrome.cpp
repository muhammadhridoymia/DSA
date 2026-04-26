// Check Palindrome (Two Pointers)
// Given a string, check if it is a palindrome using the two pointers technique.
// example: str = "racecar" => output: true

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    // Remove non-alphanumeric characters and convert to lowercase
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string str = "racecar";
    if (isPalindrome(str)) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}