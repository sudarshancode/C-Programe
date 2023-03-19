#include <stdio.h>
struct s
{
    char name[20];
    char age[10];
};
int main()
{
    FILE *fp;
    fp = fopen("demo.txt","w");
    struct s s1;
    printf("Enter your name:");
    scanf("%s",&s1.name);
    printf("Enter your age:");
    scanf("%s",&s1.age);
    printf("Name:%s Age:%s",s1.name,s1.age);
    fprintf(fp,"%s %s",s1.name,s1.age);
    fclose(fp);
}