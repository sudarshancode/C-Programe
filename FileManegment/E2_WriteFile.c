#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[40]="sudarshan Chakraborty";
    int len=strlen(name);
    int i;

    file= fopen("Sudarshan1.txt","w");

    if(file==NULL)
    {
        printf("File doesnot exgits");
    }
    else{
        printf("File is Opened");
        for(i=0;i<len;i++){
            printf(name[1],file);  
        }
        printf("File written is successfully");
        fclose(file);
    }
}