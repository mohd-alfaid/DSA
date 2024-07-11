 #include <iostream>
using namespace std;

int main() {
    int arr[1000];
int n,i;
cout<<"Enter the array size :";
cin>>n;
cout<<"enter the array elements";
for(int i=0; i<n; i++)
{
 cin>>arr[i];
 }
    // Selection sort in descending order starting from the end
    for (int i = n - 1; i >0; i--)
    {
        int maxIdx = i;
        for (int j = i - 1; j >=0; j--) {
            if (arr[j] < arr[maxIdx]) {
                maxIdx = j;
            }
        }
        swap(arr[maxIdx], arr[i]);
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
