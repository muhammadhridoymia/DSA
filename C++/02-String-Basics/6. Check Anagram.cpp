// Check Anagram
// An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// Given two strings, determine if they are anagrams of each other.
// example: str1 = "listen", str2 = "silent" => output: true


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(const string& str1, const string& str2) {
    // Remove spaces and convert to lowercase
    string s1 = str1;
    string s2 = str2;
    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    // If lengths are different, they can't be anagrams
    if (s1.length() != s2.length()) {
        return false;
    }

    // Sort the strings and compare
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";

    if (isAnagram(str1, str2)) {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are anagrams." << endl;
    } else {
        cout << "\"" << str1 << "\" and \"" << str2 << "\" are not anagrams." << endl;
    }

    return 0;
}
