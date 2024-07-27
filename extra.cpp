#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 1;

    cout << "Odd numbers = ";
    while (i <= n) {
        if (i % 2 != 0) {
            cout << i;
            if (i + 2 <= n) {
                cout << ", ";
            }
        }
        i++;
    }
    cout << endl;

    i = 1; // Reset i to 1 to start printing even numbers
    cout << "Even numbers = ";
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i;
            if (i + 2 <= n) {
                cout << ", ";
            }
        }
        i++;
    }
    cout << endl;

    return 0;
}
