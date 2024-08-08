 #include <iostream>
 using namespace std;
 int main(){
int row,col,n;
cout<<" enter the number ";
cin>>n;
for(row=1;row<=n;row=row+1)
{
    //star print

    for(col=1;col<=row; col=col+1)
    cout<<"* ";
    //space print
    for(col=1;col<=2*n-2*row; col =col+1)
    cout<<"  ";
    //star proint
    for(col=1; col<=row;col=col+1)
    cout<<"* ";

    cout<<endl;
}


for(row=n-1; row>=1;row=row-1)
{
     //star print

    for(col=1;col<=row; col=col+1)
    cout<<"* ";
    //space print
    for(col=1;col<=2*n-2*row; col =col+1)
    cout<<"  ";
    //star proint
    for(col=1; col<=row;col=col+1)
    cout<<"* ";
cout<<endl;
}



 }