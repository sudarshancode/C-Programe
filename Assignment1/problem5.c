/*Write a C program to input a day and convert it into equivalent monts and days*/
#include<stdio.h>
int main()
{
    int n;
    int month,day;
    printf("Enter number of day:");
    scanf("%d",&n);

    if(n>0)
    {
        month=n/30;
        day=n%30;
        printf("%d months %d days.",month,day);
    }
    else{
        printf("Enter possitive value");
    }
    return 0;
}