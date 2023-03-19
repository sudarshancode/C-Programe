/*Write a C program to convert a given integer (in days) 
to years, months and days, assumes that all months have 30 
days and all years have 365 days
*/
#include<stdio.h>
void main()
{
    int n,year=0,month=0,day=0;
    printf("Enter Days:");
    scanf("%d",&n);

    year=n/365;
    month=(n-(365*year))/12;
    day=((n-(365*year))-(month*12));
    printf("%d year :%d months %d: days",year,month,day);
}