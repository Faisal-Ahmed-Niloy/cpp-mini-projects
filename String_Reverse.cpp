// Reverse a string with this code

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverse(str.begin(), str.end());
    cout << "Reversed: " << str << endl;
    return 0;
}
