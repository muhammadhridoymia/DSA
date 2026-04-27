// Longest Substring with K Unique Characters
// Given a string and an integer k, find the length of the longest substring with exactly k unique characters.
// example: str = "abcabc", k = 2 => output: 4 (substring "bca" or "cab")

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int lengthOfLongestSubstringKUnique(const string& str, int k) {
    unordered_map<char, int> charCount;
    int maxLength = 0;
    int start = 0;

    for (size_t end = 0; end < str.size(); end++) {
        charCount[str[end]]++;

        while (charCount.size() > static_cast<size_t>(k)) {
            charCount[str[start]]--;
            if (charCount[str[start]] == 0) {
                charCount.erase(str[start]);
            }
            start++;
        }

        if (charCount.size() == static_cast<size_t>(k)) {
            maxLength = max(maxLength, static_cast<int>(end - start + 1));
        }
    }

    return maxLength;
}

int main() {
    string str = "abcabc";
    int k = 2;
    int result = lengthOfLongestSubstringKUnique(str, k);

    cout << "Length of the longest substring with exactly " << k << " unique characters in \"" << str << "\": " << result << endl;

    return 0;
}