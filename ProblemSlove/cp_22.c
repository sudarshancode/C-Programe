/*Write a C program to read an array 
of length 6 and find the smallest element and its position*/
#include<stdio.h>
int main()
{
    int array[5];
    int i,val,p=0;
    printf("Enter array element:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array:");
    for(i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
    val=array[0];
    for(i=1;i<5;i++)
    {
        if(val>array[i])
        {
            val=array[i];
            p=i;
        }
    }
    printf("\nSamalest value=%d\n",val);
    printf("Position:%d",p);

    return 0;
}