/*write a C program to find the absolute value of a number using conditional operator*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num;
    printf("Enter any number:");
    scanf("%f",&num);

    float absolute=abs(num);
    printf("Absolute value of this number:%.2f",absolute);
    return 0;
}