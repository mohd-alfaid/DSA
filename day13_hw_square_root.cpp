#include <iostream>

using namespace std;

int squareRoot(int number) {
    if (number < 0) {
        cout << "Cannot compute square root of a negative number" << endl;
        return -1; // Return a negative value to indicate error
    }

    int guess = number / 2;
    int tolerance = 1; // Tolerance for precision

    while (abs(guess * guess - number) > tolerance) {
        guess = (guess + number / guess) / 2;
    }

    return guess;
}

int main() {
    int number;
    cout << "Enter a number to find its square root: ";
    cin >> number;

    int result = squareRoot(number);

    if (result >= 0) {
        cout << "Square root of " << number << " is: " << result << endl;
    }

    return 0;
}
