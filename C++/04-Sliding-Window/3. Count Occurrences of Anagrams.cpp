// Count Occurrences of Anagrams
// Given a string and a pattern, find the number of times the pattern appears as a substring in the string, considering anagrams.
// example: str = "abcab", pat = "ab" => output: 2 (anagrams of "ab" are "ab" and "ba")

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int countAnagrams(const string& str, const string& pat) {
    unordered_map<char, int> patFreq;
    for (char c : pat) {
        patFreq[c]++;
    }

    int count = 0;
    int windowSize = pat.size();
    unordered_map<char, int> windowFreq;

    for (size_t i = 0; i < str.size(); i++) {
        windowFreq[str[i]]++;

        if (i >= windowSize - 1) {
            if (windowFreq == patFreq) {
                count++;
            }
            windowFreq[str[i - windowSize + 1]]--;
            if (windowFreq[str[i - windowSize + 1]] == 0) {
                windowFreq.erase(str[i - windowSize + 1]);
            }
        }
    }

    return count;
}

int main() {
    string str = "abcab";
    string pat = "ab";
    int result = countAnagrams(str, pat);

    cout << "Number of occurrences of anagrams of \"" << pat << "\" in \"" << str << "\": " << result << endl;

    return 0;
}