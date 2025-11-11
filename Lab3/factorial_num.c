#include<stdio.h>
int main()
{
    long int fact=1;
    int n;
    printf("Enter number to find factorail:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    printf("The factorial of %d is %ld\n", n, fact);
    long int fac = 1;
    for(int i=n;i>=1;i--){
        fac = fac*i;
    }
        printf("The factorial of %d is %ld\n", n, fac);

} 