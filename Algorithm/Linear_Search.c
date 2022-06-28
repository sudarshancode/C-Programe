#include<stdio.h>
int main()
{ // index    0   1  2 3  4  5  6
    int a[]={20,-30,45,12,34,56,89};
    int search_item=89;
    int i;
    for(i=0;i<7;i++)
    {
        if(a[i]==search_item){
            printf("Item index found: %d\n",i);
            return 0;
        }
    }
    printf("Item not found");
    return 0;
}