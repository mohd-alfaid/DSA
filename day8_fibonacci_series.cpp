#include<iostream>
using namespace std;

int main()
{

int n,prev=0,last= 1,cur;
cout<<"enter the number";
cin>>n;

for(int i = 0; i <n; i = i+1)
if (i <=1)

cur = i;
else
{
cur = prev+last;
prev = last;
last  = cur;
}

cout<<cur<<" ";


}