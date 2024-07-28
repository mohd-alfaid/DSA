#include<iostream>
using namespace std;

int main()
{

int n, x=1;
cout<<"enter the number ";
cin>>n;

if (n<1)
{cout<<"0";}


while(x<=n)
{
    for( x=1; x*x<=n; x++){
    
    if (x*x == n){
    cout<<x;
    return 0;
    }
    }
     break; 
    }
    cout<<"not a perfect square";
    return 0;
}