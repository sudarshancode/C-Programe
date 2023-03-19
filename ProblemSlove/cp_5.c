#include<stdio.h>
void main()
{
    int a=5,i,mul=0;
    for(i=1;i<11;i++){
        mul=a*i;
        printf("%dx%d=%d\n",a,i,mul);
    }
}