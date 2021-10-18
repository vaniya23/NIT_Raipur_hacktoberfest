#include<iostream>
using namespace std;

int add (int a, int b){

    return a+b;
}

int main(){

    int FN, SN, result;

    cout<<"Enter the First Number: ";
    cin>>FN;
    cout<<"Enter the Second Number";
    cin>>SN;

    result=add(FN,SN);
    cout<<"Result is: "<<result;
    return 0;
}