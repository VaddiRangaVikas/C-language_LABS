#include<stdio.h>
int fib(int a);
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d ",fib(i));
    }
}
int fib(int a){
    if(a==0||a==1){ 
        return a;
    }
    else{
        return fib(a-1)+fib(a-2);
    }
}