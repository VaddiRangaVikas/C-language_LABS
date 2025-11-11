#include<stdio.h>
int sum(int a);
int main(){
    int n;
    printf("enter the range");
    scanf("%d",&n);
    printf("The sum is : %d",sum(n));
}
int sum(int a){
    if(a==0){
        return 0;
    }else{
        return a+sum(a-1);
    }
}