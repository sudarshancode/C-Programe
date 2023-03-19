#include<stdio.h>
void add();
void sub();
void mul();
void div();
int x,y,s=0;
void main()
{
    int n;
    printf("**********Menu Driven**************\n\n");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\n");
    printf("Enter Your Choise:");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        default:
            printf("Select right value....");
    }


}
void add(){
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    s=x+y;
    printf("Sum=%d\n",s);
}
void sub(){
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    s=x-y;
    printf("Sub=%d\n",s);
}
void mul(){
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    s=x*y;
    printf("Multiplication=%d\n",s);
}
void div(){
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    s=x/y;
    printf("Div=%d\n",s);
}