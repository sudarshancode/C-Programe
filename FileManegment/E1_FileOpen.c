#include<stdio.h>
int main()
{
    FILE *file;

    file= fopen("Sudarshan.txt","r");

    if(file==NULL)
    {
        printf("File is not exits");
    }
    else{
        printf("File is Opened");
        fclose(file);
    }
}
