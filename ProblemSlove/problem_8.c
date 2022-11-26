//Calculating avarage of 3 numbers
#include<stdio.h>
int main()
{
    int num1,num2,num3,sum=0;
    printf("Enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum=num1+num2+num3;
    float avg=(float)sum/3;
    printf("Average=%.2f",avg);

}