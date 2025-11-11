#include<stdio.h>
int main()
{
    int c;
    float a;
    printf("Enter your amount:");
    scanf("%f", &a);
    printf("Enter 1-USD, 2-EUP, 3-GBP, 4-JYP:");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            printf("%.2f", (83*a));
            break;
        case 2:
            printf("%.2f", (91*a));
            break; 
        case 3:
            printf("%.2f", (107*a));
            break; 
        case 4:
            printf("%.2f", (0.56*a));
            break;     
        default:
            printf("Enter valid choice");
        }
} 