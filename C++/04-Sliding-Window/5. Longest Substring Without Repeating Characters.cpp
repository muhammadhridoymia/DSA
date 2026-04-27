// Longest Substring Without Repeating Characters
// Given a string, find the length of the longest substring without repeating characters.
// example: str = "abcabcbb" => output: 3 (substring "abc")

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(const string& str) {
    unordered_map<char, int> charIndex;
    int maxLength = 0;
    int start = 0;

    for (size_t end = 0; end < str.size(); end++) {
        if (charIndex.find(str[end]) != charIndex.end()) {
            start = max(start, charIndex[str[end]] + 1);
        }
        charIndex[str[end]] = end;
        maxLength = max(maxLength, static_cast<int>(end - start + 1));
    }

    return maxLength;
}

int main() {
    string str = "abcabcbb";
    int result = lengthOfLongestSubstring(str);

    cout << "Length of the longest substring without repeating characters in \"" << str << "\": " << result << endl;

    return 0;
}