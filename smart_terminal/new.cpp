// factorial of a number
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0)
        return -1;
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0 || num > 12) {
        cout << "Please enter a non-negative number up to 12." << endl;
        return 1;
    }
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
