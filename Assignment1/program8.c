/*Write a C program to find the maximum of three numbers using conditional operator*/
#include<stdio.h>
int main()
{
    int a, b, c, large ;
    printf("Enter three numbers : ") ;
    scanf("%d %d %d", &a, &b, &c) ;
    large = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
    printf("\nThe biggest number is : %d", large) ;
}