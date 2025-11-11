#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>0){
        printf("it is positive");
    }else if(n<0){
        printf("it is negative");
    }else{
        printf("it is zero");
    }
}