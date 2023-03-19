#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20]="sudarshan";
    char str2[20]="sudarshan";

    int val=strcmp(str1,str2);
    printf("%d",val);
}