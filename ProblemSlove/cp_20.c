//Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5
#include<stdio.h>
int main()
{
    int array[5];
    int i;
    printf("Enter array item:");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    printf("Array Item:\n");
    for(i=0;i<5;i++)
    {
        printf("array[%d]=%d\n",i+1,array[i]);
    }
}