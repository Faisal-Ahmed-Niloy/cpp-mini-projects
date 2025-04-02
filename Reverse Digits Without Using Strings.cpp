#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;
    while (num) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num = 12345;
    cout << "Reversed: " << reverseNumber(num) << endl;
    return 0;
}
