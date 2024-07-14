#include<iostream>
using namespace std;
#include<vector>


int main()
{

// create vector
vector<int>v;

// Size and capacity

cout<<" size of v1: "<<v.size()<<endl;
cout<<"capacity of v1: "<<v.capacity()<<endl;

v.push_back(3);
v.push_back(8);
v.push_back(12);
v.push_back(21);
v.push_back(45);
cout<<" size of v2: "<<v.size()<<endl;
cout<<"capacity of v2: "<<v.capacity()<<endl;
 
}