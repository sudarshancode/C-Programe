/*Write a C Program to swap two numbers a)Using third veriable
b)Without using a third veriable*/
#include<stdio.h>
void using_third_veriable(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d ,b=%d",a,b);
}
void without_using_third_veriable(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);

}
int main()
{
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);

    printf("\nBefore swapping:\na=%d,b=%d",x,y);
    printf("\nAfter Swapping using third veriable:\n");
    using_third_veriable(x,y);
    printf("\nAfter Swapping without using third veriable:\n");
    without_using_third_veriable(x,y);
}