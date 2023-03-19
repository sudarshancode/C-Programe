/*given the values of three variables a,b and c,write a program to compute and display
the value of x,where x=a/(b-c) */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please given the values of three variables a,b,c respectivly:");
    scanf("%d %d %d",&a,&b,&c);

    int x=a/(b-c);
    printf("After compute x=a/(b-c)\n");
    printf("The value of x:%d",x);
}