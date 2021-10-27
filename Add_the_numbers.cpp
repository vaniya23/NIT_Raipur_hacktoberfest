#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int T_num,i,j,x,sum;
    cin>>T_num;
    int arr[T_num];
    for ( i = 0; i < T_num; i++)
    {
        cin>>arr[i];
    }
    for ( i = 0; i < T_num; i++)
    {
        sum=0;
        j=arr[i];
        while (j!=0)
        {
            sum+=(j%10);
            j=j/10;
        }
        cout<<sum<<"\n";
     }
    

}