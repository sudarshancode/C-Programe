#include <stdio.h>
#include<string.h>
void green();
void red();
void yellow();
void blue();
void purpal();
void Cyan();
void white();
int main()
{
    int age;
    int adult;
    while(1){
    yellow();
    printf("\t\t\t||\t||\t  //\\\\\t\t||====\t||====\t\\\\      //\n");
    printf("\t\t\t||\t||\t //  \\\\\t\t||   ||\t||   ||\t \\\\    //\n");
    printf("\t\t\t||\t||\t//    \\\\\t||   ||\t||   ||\t  \\\\  //\n");
    printf("\t\t\t||======||     //======\\\\\t||====\t||====\t   \\\\//\n");
    printf("\t\t\t||\t||    //        \\\\\t||\t||\t    ||\n");
    printf("\t\t\t||\t||   //          \\\\\t||\t||\t    ||\n");
    printf("\t\t\t||\t||  //            \\\\\t||\t||\t    ||\n");


    green();
    printf("\t\t\tB\tI\tR\tT\tH\tD\tA\tY\n\n");
    red();
    printf("\t\t\t\tS U D A R S H A N  C H A K R A B O R T Y\n\n");
    blue();
    printf("Enter your age:");
    scanf("%d",&age);
    if(age<18){
        Cyan();
        printf("You are Child.Don't warray:)\nYou shall be adult after %d years.\n",(18-age));
    }
    else{
        purpal();
        printf("You are adult.So you can applay for love.\n");
    }
    }
    return 0;
}
void green(){
    printf("\033[0;32m");
}
void red(){
    printf("\033[0;31m");
}
void yellow(){
    printf("\033[0;33m");
}
void blue(){
    printf("\033[0;34m");
}
void purpal()
{
    printf("\033[0;35m");
}
void Cyan(){
    printf("\033[0;36m");
}
void white(){
    printf("\033[0;37m");
}
