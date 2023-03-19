#include<stdio.h>
int main()
{
   float num[5];
   int i,pos=0,neg=0;
   printf("Enter five digits:\n");
   for(i=0;i<4;i++){
    scanf("%d",&num[i]);
   }
   for(i=0;i<4;i++){
    if(num[i]>0){
        pos=pos+1;
    }else{
        neg=neg+1;
    }
   }
   printf("Postive numbers are %d\n",pos);
   printf("Negative numbers are %d\n",neg);
   return 0;
}