#include<iostream>
using namespace std;

bool prime (int n)
{
    if(n<2)
    return 0;


    for( int i=2; i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
return 1;
}
int fact(int n=3) // default parameter, agar kchh na do to 
// value khudse hi 3 lelega ya jo di gyi ho vo
{int ans =1;
    for(int i=1; i<=n;i++)
    ans = ans*i;
return ans;

}
int main()
{

int a,b;
cout<<"enter the number";
cin>>a>>b;

cout<<fact();// default print 
cout<<endl;
//a is prime or not 
cout<<prime(a)<<endl;
//a is factoroial
cout<<fact(a)<<endl;
//b is primme
cout<<prime(b)<<endl;
//b is factorial
cout<<fact(b)<<endl;
//b-a is prime 
cout<<prime(b-a)<<endl;
//b-a is factorial
cout<<fact(b-a)<<endl;

}