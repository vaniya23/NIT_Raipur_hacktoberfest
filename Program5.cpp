#include<iostream>
using namespace std;
int main()
{
int i,j,n,space;
char d;
cout<<"Program to print the following pattern having n number of rows\n";
cout<<"    A\n";
cout<<"   AB\n";
cout<<"  ABC\n";
cout<<" ABCD\n";
cout<<"Enter the number of rows="<<" ";
cin>>n;
i=1;
while(i<=n)
{
j=1;
d='A';
for(space=1;space<=(n-i);space++)
{
cout<<" ";
}
while(j<=i)
{
cout<<d;
d=d+1;
j=j+1;
}
i=i+1;
cout<<"\n";
}
}
