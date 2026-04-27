// Count Vowels and Consonants
#include <iostream>
#include <string>
using namespace std;

void countVowelsAndConsonants(const string& str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    for (char c : str) {
        if (isalpha(c)) {
            char lowerC = tolower(c);
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
}

int main() {
    string str = "Hello World!";
    int vowelCount, consonantCount;

    countVowelsAndConsonants(str, vowelCount, consonantCount);

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
