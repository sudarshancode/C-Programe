#include<stdio.h>
int main()
{
    int array[3],i,j,k;
    int size=3;
    int left=0,right=size,middle,item;
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nPrivious Shorting array is=>\n");
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    //This is for sorting condition
    for(j=0;j<size;j++){
        for(k=0;k<size;k++)
        {
            if(array[j]<array[k]){
                int swap=array[j];
                array[j]=array[k];
                array[k]=swap;
            }  
        }
    }
    printf("\nNew array:\n");
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    printf("\nEnter search element:");
    scanf("%d",&item);
    //binary search code
    
    while(left<=right){
        middle=(left+right)/2;
        if(array[middle]==item){
            printf("\nElement is avilable in array in %d index.",middle);
            return 0;
        }
        else if(array[middle]<item){
            left=middle+1;
        }
        else{
            right=middle-1;
        }  
    }
    printf("Element is not present in this array.");
}