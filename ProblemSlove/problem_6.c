//upper to lower using libary function
#include<stdio.h>
#include<ctype.h>
int main()
{
    char lower,upper;
    printf("Enter any Upper case letter:");
    scanf("%c",&upper);

    lower=tolower(upper);
    printf("Lower case letter:%c",lower);
}