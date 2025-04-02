#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generatePassword(int len) {
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    srand(time(0));
    for (int i = 0; i < len; i++)
        cout << chars[rand() % chars.length()];
    cout << endl;
}

int main() {
    generatePassword(10);
    return 0;
}
