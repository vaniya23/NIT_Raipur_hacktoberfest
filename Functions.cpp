#include<iostream>
using namespace std;

int add (int a, int b){

    return a+b;
}

int multiply(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int main(){

    int FN, SN, result;

    cout<<"Enter the First Number: ";
    cin>>FN;
    cout<<"Enter the Second Number";
    cin>>SN;

    sum=add(FN,SN);
    cout<<"Sum is: "<<sum<<endl;
    mul = multiply(FN, SN);
    cout<<"Multiplication is: "<<mul<<endl;
    d = div(FN, SN);
    cout<<"Division is: "<<d;
    return 0;
}
