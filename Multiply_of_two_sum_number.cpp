#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int arr[] ={3,7,8,11,25};
int n = sizeof(arr) / sizeof(arr[0]); 
int target = 56;
int start =0, end= n-1;
// two pointer 
while(start<end)
{
 if (arr[start]*arr[end]==target)
  {cout<<arr[start]<<" "<<arr[end]<<endl;
  return 0;
  }
  else if(arr[start]*arr[end]<target)
  {start++;}
  {
  end--;}

}
cout<<"No pair found, i'm sry dude G"<<endl;
return 0;

}