#include <iostream>
#include <algorithm> // For binary_search
using namespace std;

int main() {
    int n;
    cin >> n; // Input size of the array

    // Declare a plain array of size n
    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target; // Input the target sum

    int dummy = -1; // This will store index of the second element in the pair
    int first = -1; // This will store index of the first element in the pair

    // Iterate through each element except the last one
    for (int i = 0; i < n - 1; i++) {
        int start = i + 1; // Start from the next element
        int end = n - 1; // End at the last element
        int temp = target - arr[i]; // Calculate the complement (the number needed to reach target)

        // Perform binary search on the subarray [start, end]
        while (start <= end) {
            int mid = (start + end) / 2; // Find middle index

            if (arr[mid] == temp) { // If we found the complement in the array
                first = i;   // Store the index of the first number
                dummy = mid; // Store the index of the second number
                break;        // Break the loop as we found the pair
            } else if (arr[mid] < temp) {
                start = mid + 1; // If the mid element is less, move to the right half
            } else {
                end = mid - 1; // If the mid element is greater, move to the left half
            }
        }
    }

    // If valid pair is found, print it
    if (dummy != -1 && first != -1)
        cout << arr[first] << " " << arr[dummy] << endl;
    else
        cout << -1 << " " << -1 << endl; // If no pair is found, print -1
    return 0;
}
