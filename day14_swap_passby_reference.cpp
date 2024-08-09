#include <iostream>
using namespace std;

void swap(int &a, int &b) // pass by reference 
{
int c;
c=a;
a=b;
b=c;

}
void swap(float &c, float &d)
{
    float r= c;
    c=d;
    d=r;

}
int main()
{
int a, b;
cin>>a>>b;

swap(a,b);
cout<<a<<" "<<b<<" ";
cout<<endl;
float c=4.8,  d= 3.6;

swap(c,d);
cout<<c<<" "<<d<<" ";
cout<<endl;

}