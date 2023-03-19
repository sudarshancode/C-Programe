#include<stdio.h>
int main()
{
    int row1,row2,col1,col2,n;
    printf("Enter value of N:");
    scanf("%d",&n);
    for(row1=1;row1<=n;row1++)
    {
        for(col1=1;col1<=row1;col1++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(row2=n+1;row2>=1;row2--)
    {
        for(col2=1;col2<=row2;col2++){
            printf("* ");
        }
        printf("\n");
    }
}