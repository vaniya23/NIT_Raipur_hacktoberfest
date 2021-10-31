#include<iostream>
using namespace std;
int main()
{
int i,j,k,n,d,temp;
cout<<"Program to print the following star pattern having n number of rows\n";
cout<<"    *\n";
cout<<"   ***\n";
cout<<"  *****\n";
cout<<"   ***\n";
cout<<"    *\n";
cout<<"Enter the number of rows="<<" ";
cin>>n;
i=1;
while(i<=n)
{
j=1;
while(j<=n-i)
{
cout<<" ";
j=j+1;
}
k=1;
while(k<=2*i-1)
{
cout<<"*";
k=k+1;
}
cout<<"\n";
i=i+1;
}
i=1;
while(i<=n-1)
{
j=1;
while(j<=i)
{
cout<<" ";
j=j+1;
}
k=1;
while(k<=2*(n-i)-1)
{
 cout<<"*";
 k=k+1;
}
cout<<"\n";
i=i+1;
}
}

