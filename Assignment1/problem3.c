/*Write a C program to convert a Fahrenheit temperature into its equivalent Celsius
temperature*/
#include<stdio.h>
int main()
{
    float celsius=0,fahrenheit;
    printf("Enter Fahrenheit Temperature:");
    scanf("%f",&fahrenheit);

    celsius=(5*fahrenheit-32*5)/9;
    printf("Celsius Temperature:%f",celsius);
    return 0;
}