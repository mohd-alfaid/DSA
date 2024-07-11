#include <iostream>
using namespace std;

int main (){
int arr[7] = { 1,3,6,5,239,563,67};

int ans = INT_MIN;

for (int i = 0; i<7; i++)
{
if(arr[i]>ans)
ans = arr[i];

}
 cout<<ans<<endl;

//for second max array;
 int second=INT_MIN;
for(int i=0;i<7;i++)
{

if(ans!= arr[i])
second = max(second,arr[i]);

}

cout<<second<<endl;

}