//Area of Triangle given three sides
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s=0,dem=0,area=0;
    printf("Enter value of three sides:");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    dem=s*(s-a)*(s-b)*(s-c);
    area=pow(dem,0.5);
    printf("Area of triangle=%.2lf",area);
}