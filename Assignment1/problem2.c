/*The length and breadth of a rectangle and radius of a circle are input through keyboard.
Write a C program to claculate the area and perimeter of the rectangle,and the area and the circumference
of the circle.
*/
#include<stdio.h>
#define PI 3.146
float rectangle_area(float length,float breadth)
{
    float Rarea=length*breadth;
    return Rarea;
}
float rectangle_perimeter(float length,float breadth)
{
    float perimeter=2*(length+breadth);
    return perimeter;
}
float circle_area(float radius)
{
    float Carea=PI*radius*radius;
    return Carea;
}
int main()
{
    float l,b,r;
    printf("Enter length and breadth of a rectangle:");
    scanf("%f %f",&l,&b);
    printf("Enter radius of a circle:");
    scanf("%f",&r);

    printf("Area of the reatangle:%.2f\n",rectangle_area(l,b));
    printf("Perimeter of the triangle:%.2f\n",rectangle_perimeter(l,b));
    printf("Area of a Circle:%.2f",circle_area(r));
    return 0;
}