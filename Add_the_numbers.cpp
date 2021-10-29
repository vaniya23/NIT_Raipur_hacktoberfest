#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int T_num,k,j,x,sum,sum1=0;
    cin>>T_num;
    int arr[T_num];
    for ( k = 0; k < T_num; k++)
    {
        cin>>arr[k];
    }
    for ( k = 0; k < T_num; k++)
    {
        sum=0;
        j=arr[k];
        while (j!=0)
        {
            sum+=(j%10);
            j=j/10;
        }
        cout<<sum<<"\n";
     }
    

}
