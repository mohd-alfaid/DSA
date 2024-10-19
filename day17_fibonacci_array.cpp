#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    int arr[1000]; // Maximum size for Fibonacci sequence

    arr[0] = 0;
    arr[1] = 1;

    // Calculating Fibonacci sequence
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Printing only the nth Fibonacci number
    cout << "The " << n << "th Fibonacci number is: " << arr[n-1] << endl;
    
    return 0;
}
