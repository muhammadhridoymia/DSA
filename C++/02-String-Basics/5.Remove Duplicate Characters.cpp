// Remove Duplicate Characters
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(const string& str) {
    unordered_set<char> seen;
    string result = "";

    for (char c : str) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }

    return result;
}

int main() {
    string str = "hello";
    string uniqueStr = removeDuplicates(str);

    cout << "Original string: " << str << endl;
    cout << "String with duplicates removed: " << uniqueStr << endl;

    return 0;
}
