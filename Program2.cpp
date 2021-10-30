#include<iostream>
using namespace std;
int main()
{
int i,n,star;
cout<<"Program to print the following star pattern having n number of rows\n";
cout<<"*\n";
cout<<"**\n";
cout<<"***\n";
cout<<"****\n";
cout<<"*****\n";
cout<<"enter the number of rows ="<<" ";
cin>>n;
i=1;
while(i<=n)
{
star=1;
while(star<=i)
{
cout<<"*";
star=star+1;
}
cout<<"\n";
i=i+1;
}
}
