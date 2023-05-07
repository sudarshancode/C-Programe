//Write a C program to compute the average of three numbers input from keyboard
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c)
    {
        printf("%d is large number.",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is large number.",b);
    }
    else{
        printf("%d is large number.",c);
    }
    return 0;
}