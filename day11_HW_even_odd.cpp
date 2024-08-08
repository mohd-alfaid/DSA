#include<iostream>
using namespace std;
int main(){

int n;
cout<<" enter the number";
cin>>n;
int i=1;


while(i<=n)
{
if(i%2==0)
{cout<<i<<" is even "<<endl;}
else
{cout<<i<<" is odd "<<endl;}

i++;
}


return 0;


}