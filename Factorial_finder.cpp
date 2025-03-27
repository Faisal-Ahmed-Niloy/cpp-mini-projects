#include <iostream>
using namespace std;

long long factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);  //equation for finding factorial
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial: " << factorial(num) << endl;
    return 0;
}
