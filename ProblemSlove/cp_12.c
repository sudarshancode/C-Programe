#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s{
    char name[30];
    char ph[11];
    char password[9];
    int amount;
};
void menu();
void regi();
void login();
void work();
void withdraw();
void deposit();
void status();
void transfar();
int main()
{
    menu();
}
void menu()
{
    int opt_m;
    printf("\t\tOnline Bancking\n");
    printf("\t\t1.Register\n");
    printf("\t\t2.LogIn\n");
    printf("\t\tChose Option:");
    scanf("%d",&opt_m);
    switch(opt_m){
        case 1:
            regi();
            break;
        case 2:
            login();
            break;    
    }
}
void regi()
{
    int optr;
    struct s s1;
    FILE *fp;
    fp=fopen("User_data.txt","w");
    system("cls");
    fflush(stdin);
    printf("\t\tRegistration Form\n");
    printf("\t\t1.Name:");
    scanf("%s",&s1.name);
    printf("\t\t2.Phone:");
    scanf("%s",&s1.ph);
    printf("\t\t3.password:");
    scanf("%s",&s1.password);
    fprintf(fp,"%s %s %s",s1.name,s1.ph,s1.password);
    fclose(fp);
    printf("\t\tPress 1 to go Main menu:");
    scanf("%d",&optr);
    switch(optr){
        case 1:
            system("cls");
            menu();
            break;
        default:
            printf("Press valid key....");        
    }
    exit(0);
}
void login()
{
    struct s s2,s3;
    FILE *fp;
    fp=fopen("User_data.txt","r");
    system("cls");
    printf("\t\tLogIn Page\n\n");
    printf("\t\tEnter Phone Number:");
    scanf("%s",&s3.ph);
    printf("\t\tEnter password:");
    scanf("%s",&s3.password);

    fscanf(fp,"%s %s %s",&s2.name,&s2.ph,&s2.password);

    if(strcmp(s2.password,s3.password)==0 && strcmp(s2.ph,s3.ph)==0){
        printf("\t\tLogin Sucessful\n");
        printf("\t\tPress any key to continue:\n");
        getch();
        work();
    }else{
        printf("\t\tLogin Unsucessful.....\n\t\tTry again letter....\n");
        printf("\t\tGo to main menu press any key:");
        getch();
        menu();
    }
    fclose(fp);
}
void work()
{
    int optwork;
    system("cls");
    printf("\t\tWELCOME TO ONLINE BANCKING\n\n");
    printf("\t\t1.Withdraw\n");
    printf("\t\t2.Deposite\n");
    printf("\t\t3.Status\n");
    printf("\t\t4.Transfar\n");
    scanf("%d",&optwork);
    switch(optwork){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            printf("\t\tPress any correct option....\n");
            printf("\t\tTo continue press any key..");
            getch();
            system("cls");
            work();        
    }
}
void withdraw()
{
    struct s s4;
    printf("\t\tEnter amout:");
    scanf("%d",&s4.amount);
}
void deposit()
{

}
void status()
{

}
void transfar()
{

}