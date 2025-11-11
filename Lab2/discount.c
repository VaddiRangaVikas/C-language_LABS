#include<stdio.h>
int main()
{
    int cost;
    printf("Enter the amount:");
    scanf("%d", &cost);
    if(cost>5000){
        printf("You are eligible for discount");
        printf("total amount %d",cost-(cost/10));
    }
    printf("\nProgram ends");
} 