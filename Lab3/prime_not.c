#include<stdio.h>
int main()
{
    int n,i,c;
    printf("Enter the number:");
    scanf("%d", &n);
    c = 0;
    i = 1;
    while(i<=n){
        if(n%i==0){
            c += 1;
            i++;
        }
    }
    if(c==2){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
} 