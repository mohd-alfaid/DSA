#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   cout << "Enter the size of array: ";
   cin >> n; //size of array
   
   char arr[n]; // array declaration with the size entered by the user
   
   cout << "Enter the elements in the array: ";
   for(int i = 0; i < n; i++)
       cin >> arr[i];

   // Sorting using selection sort
   for(int i = 0; i < n - 1; i++)
   {
       int index = i;
       for(int j = i + 1; j < n; j++)
       {
           if(arr[j] < arr[index])
               index = j;
       }
       swap(arr[i], arr[index]);
   }

   cout << "Sorted array: ";
   for(int i = 0; i < n; i++)
   {
       cout << arr[i] << " ";
   }

   return 0;
}
