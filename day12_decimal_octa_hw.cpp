#include<iostream>
using namespace std;
int main(){

int num;
cout<<" enter the number ";
cin>>num;

int mul=1,ans=0,rem;

while(num>0)  // hum only num bhi likh skte h
{
//reminder
rem= num%8;
// num ko divide krdo
num/=8;
//ans

ans+= mul*rem;
//mul
mul*=10;

}

cout<<ans<<endl;


}