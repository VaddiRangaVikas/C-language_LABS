#include<stdio.h>
int main()
{
    int a,b;
    char p;
    printf("Enter operator:");
    scanf("%c", &p);
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter b number:");
    scanf("%d", &b);
    switch(p)
    {
    case '+':
        printf("%d", (a+b));
        break;
    case '-':
        printf("%d", (a-b));
        break;
    case '*':
        printf("%d", (a*b));
        break;
    case '/':
        printf("%d", (a/b));
        break;
    case '%':
        printf("%d", (a%b));
        break;
    default:
        printf("Enter valid operator");
    }
} 