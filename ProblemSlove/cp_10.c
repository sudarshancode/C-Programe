#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,area=0;
    printf("*************CIRCLE RADIUS**************");
    printf("\n\nEnter radius(cm):");
    scanf("%f",&radius);
    
    area=PI*(radius*radius);

    printf("Area of the circle:%.2f (sqcm)",area);
    return 0;
}