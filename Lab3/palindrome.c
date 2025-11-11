#include<stdio.h>
int main(){
    int n,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        int i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    if(rev==temp){
        printf("it is a palindrome");
    }else{
        printf("it is not palindrome");
    }
}