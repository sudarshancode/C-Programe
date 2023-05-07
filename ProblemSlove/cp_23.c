/*Write a C program 
that accepts the principle, rate of interest, 
and time and calculates simple interest.*/
#include<stdio.h>
int main()
{
    int principle,rate_of_interest,time;
    float interest;
    printf("Enter principle:");
    scanf("%d",&principle);
    printf("Enter Rate of interest:");
    scanf("%d",&rate_of_interest);
    printf("Enter time(years):");
    scanf("%d",&time);

    interest=(float)((principle*rate_of_interest*time)/100);
    printf("Simple interest=%.2f",interest);

    return 0;
}