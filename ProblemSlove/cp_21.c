/*Write a C program to read an array of length 6,
change the first element by the last, the second element
by the fifth and the third element by the fourth. 
Print the elements of the modified array*/
#include<stdio.h>
#define AI 6
int main()
{
    int array[AI];
    int i;
    printf("Enter array value:");
    for(i=0;i<AI;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array element:\n");
    for(i=0;i<AI;i++)
    {
        printf("array[%d]=%d\n",i+1,array[i]);
    }
    for(i=0;i<AI;i++)
    {
        if(i<(AI/2))
        {
            int temp=array[i];
            array[i]=array[AI-(i+1)];
            array[AI-(i+1)]=temp;
        }
    }
    printf("After changed:\n");
    for(i=0;i<AI;i++)
    {
        printf("array[%d]=%d\n",i+1,array[i]);
    }
}