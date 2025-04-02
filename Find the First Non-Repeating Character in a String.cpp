#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeating(string str) {
    unordered_map<char, int> freq;
    for (char c : str) freq[c]++;
    for (char c : str) if (freq[c] == 1) return c;
    return '_';  // No unique character found
}

int main() {
    string str = "swiss";
    cout << "First non-repeating: " << firstNonRepeating(str) << endl;
    return 0;
}
