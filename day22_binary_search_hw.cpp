#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{

   // start, end, mid;

   int start =0, end= n-1, mid=start+(end-start) / 2;
   while(start<=end)
   {   mid=start+(end-start) / 2;
    //arr[mid]==key
    if(arr[mid]==key)
    return mid;
    //arr[mid]<key
    else if (arr[mid]<key) 
    end = mid-1;   
                       
    //arr[mid]>key
    else
    start=mid+1;

   }
    return -1;

   
}

int main(){

int arr[1000];
int n;
cout<<"enter the size of array";
cin>>n;
cout<<"enter the element in array";
for(int i=0; i<n; i++)
cin>>arr[i];

int key;
cout<<"enter the key";
cin>>key;

cout<<BinarySearch(arr, n, key);
return 0;


}