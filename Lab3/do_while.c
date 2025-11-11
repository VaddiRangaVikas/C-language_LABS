#include<stdio.h>
int main()
{
    int c;
    do{
        
        printf("Welcome to Greeting\n ");
        printf("1.Say Hi,\n2.Say Hello,\n3.Say Thank you,\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1:
                printf("Hi Ram!\n");
                break;
            case 2:
                printf("Hello Ram!\n");
                break;
            case 3:
                printf("Thank you Ram!\n");
                break;
            default:
                printf("Enter valid details\n");
        }
    }while(c!=4);
} 