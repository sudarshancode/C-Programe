//write a program to reverse a 2-digit number.
#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter any two digits number:");
    scanf("%d",&n);

    if(n>0)
    {
        a=n%10;
        b=n/10;
        printf("Reverse number:%d%d",a,b);
    }
    return 0;
}