#include <iostream>
#include <algorithm>  // For the sort function
using namespace std;

int main() {
    // Declare and initialize the array
    int arr[] = {5, 10, 3, 2, 50, 80};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
    
    // Sort the array
    sort(arr, arr + n);

    int target = 45;
    int start = 0;
    int end = 1;

    // Two-pointer logic
    while (end < n) {
        if (arr[end] - arr[start] == target) {  // Calculate the difference
            cout << "Pair found: " << arr[start] << ", " << arr[end] << endl;
            return 0;  // Exit once we find the pair
        } else if (arr[end] - arr[start] < target) {
            end++;  // Move the end pointer to increase the sum
        } else {
            start++;  // Move the start pointer to decrease the sum
        }
    }

    cout << "No pair found!" << endl;
    return 0;
}
