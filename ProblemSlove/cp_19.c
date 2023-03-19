//Prime number check
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    int flag=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0){
            flag=1;
            break;
        } 
    }
    if(flag==1){
        printf("Not Prime Number");
    }else{
        printf("Prime Number");
    }
    
}