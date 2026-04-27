// Find Frequency of Characters
// Given a string, find the frequency of each character in the string.
// example: str = "hello" => output: {h: 1, e: 1, l: 2, o: 1}

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> findFrequency(const string& str) {
    unordered_map<char, int> frequency;

    for (char c : str) {
        frequency[c]++;
    }

    return frequency;
}

int main() {
    string str = "hello";
    unordered_map<char, int> frequency = findFrequency(str);

    cout << "Character frequencies in \"" << str << "\":" << endl;
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
