//Area of Triangle
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter base=");
    scanf("%f",&base);
    printf("Enter height=");
    scanf("%f",&height);
    area=0.5*base*height;

    printf("Area of Triangle=%.2f\n",area);
}