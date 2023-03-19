//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds
#include<stdio.h>
void main()
{
    int time,h=0,m=0,s=0;
    printf("Enter any time(second):");
    scanf("%d",&time);
    h=time/3600;
    m=(time-(3600*h))/60;
    s=((time-(3600*h))-(60*m));
    printf("Time:%d:%d:%d",h,m,s);

}