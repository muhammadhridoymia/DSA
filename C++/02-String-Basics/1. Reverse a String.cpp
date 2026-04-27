// Reverse a String
#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    return s;
}

int main() {
    string s = "hello";
    string reversed = reverseString(s);

    cout << "Original string: " << s << endl;
    cout << "Reversed string: " << reversed << endl;

    return 0;
}