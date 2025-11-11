#include<stdio.h>
int main()
{
    int m;
    printf("Enter your marks:");
    scanf("%d", &m);
    if(m>=40){
        if(m>=90){
            printf("Your grade is EX");
        }
        else if(m>=80){
            printf("Your grade is A");
        }
        else if(m>=70){
            printf("Your grade is B");
        }
        else if(m>=60){
            printf("Your grade is C");
        }
        else if(m>=50){
            printf("Your grade is D");
        }
        else{
            printf("Your grade is E");
        }
    }
    else{
        printf("Your grade is R");
    }
} 