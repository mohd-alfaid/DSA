#include<iostream>
using namespace std;
int main()
{

int row;
int col;
for(row = 1; row<5; row = row +1)
{
for(col=1; col<=5; col= col+1)
{
char name = 'a' + col-1;

    cout<<name<<" ";
}

 cout<<endl; }

}
 