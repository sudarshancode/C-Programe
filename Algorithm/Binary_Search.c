#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,65,57,87};
    int item=87;
    int left,right,middle;
    left=0;
    right=7;

    while(left<=right){
        middle=(left+right)/2;
        if(a[middle]==item){
            printf("Item found at index: %d\n",middle);
            return 0;
        }else if(a[middle]<item){
            left=middle+1;
        }else{
            right=middle -1;
        }
    }
     printf("Item is not found \n");
    return 0;
}
