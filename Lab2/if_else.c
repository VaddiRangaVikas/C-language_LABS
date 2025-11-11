/* if(condition){
        executes when if condition is true
    }
    else{
        exectes when if block is false
    }*/
#include<stdio.h>
int main()
{
   int a;
   printf("Enter the number:");
   scanf("%d", &a);
   if(a%2==0){
    printf("%d is an even number",a);
   }
   else{
    printf("%d is odd number",a);
   }
} 