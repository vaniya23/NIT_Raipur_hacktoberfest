#include<stdio.h>

int main(){
    int first_num,last_num,n;

    scanf("%d",&n);
    last_num=n%10;

    while (n>=10)
    {
        n=n/10;
    }
    first_num=n;
    printf("The Sum of  the First and last Digits is: %d",first_num+last_num);
    
}
