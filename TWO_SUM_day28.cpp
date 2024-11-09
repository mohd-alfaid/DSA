#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Populate the vector
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);
    v.push_back(27);

    int target = 22;
    int start = 0;
    int end = v.size() - 1;

    // Two-pointer logic
    while (start < end) {
        int sum = v[start] + v[end];

        if (sum == target) {
            cout << "Pair found: " << v[start] << ", " << v[end] << endl;
            return 0; // Exit once we find the pair
        } else if (sum < target) {
            start++; // Move the start pointer to increase the sum
        } else {
            end--; // Move the end pointer to decrease the sum
        }
    }

    cout << "No pair found!" << endl;
    return 0;
}
