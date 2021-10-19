#include<iostream>
using namespace std;
int main()
{
int i,number,space,star;
cout<<"Program to print the following star pattern having n number of rows\n";
cout<<"    *\n";
cout<<"   ***\n";
cout<<"  *****\n";
cout<<" *******\n";
cout<<"Enter the number of rows ="<<" ";
cin>>number;
i=1;
while(i<=number)
{
space=1;
while(space<=(number-i))
{
cout<<" ";
space=space+1;
}
star=1;
while(star<=(2*i-1))
{
cout<<"*";
star=star+1;
}
cout<<"\n";
i=i+1;
}
}

