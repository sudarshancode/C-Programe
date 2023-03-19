/*Write a c program to input distance travelled by a car and the fuel consumed.Next,compute the mileage og the car*/
//formula:>Mileage=Kilometres run/Amount of fuel used
#include<stdio.h>
int main()
{
    int distance,fuel;
    float mileage;
    printf("Enter distance trvelled by a car:");
    scanf("%d",&distance);
    printf("Enter amount of fuel used:");
    scanf("%d",&fuel);

    mileage=distance/fuel;
    printf("The mileage of the car:%.2f",mileage);
    
}