#include<iostream>
#include<vector>
using namespace std;

// Function to print elements of the vector and display its size
void fun(const vector<int>& arr) {
    cout << "Array elements: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";  // Print each element
    }
    cout << endl;
    cout << "Size of the array: " << arr.size() << endl; // Print the size of the array
}

int main() {
    vector<int> arr;
    int temp;

    cout << "Enter elements of the array (press any non-numeric key to stop): ";
    
    // Continuously accept user input until non-numeric input is entered
    while (cin >> temp) {
        arr.push_back(temp); // Dynamically add elements to the vector
    }

    // Call the function to print array elements and its size
    fun(arr);

    return 0;
}
