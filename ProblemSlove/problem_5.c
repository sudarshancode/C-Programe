//lower to upper using libary function
#include<stdio.h>
#include<ctype.h>
int main()
{
    char lower,upper;
    printf("Enter any lower case letter:");
    scanf("%c",&lower);

    upper=toupper(lower);
    printf("Upper case letter=%c",upper);
}