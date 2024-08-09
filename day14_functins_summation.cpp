#include<iostream>
using namespace std;

int sum(int m,int n)
{
    int ans =m+n;
    return ans;

}
int mul(int m,int n)
{
int ans = m*n;
return ans;

}
void fun()
{
    cout<<"hello alfaid papa\n";
}
//main 
int main(){

int a,b;
cout<<"enter the 2 number";
cin>>a>>b;
// function call

cout<<sum(a,b);
cout<<endl;

cout<<mul(a,b);

cout<<endl;
fun( );



}