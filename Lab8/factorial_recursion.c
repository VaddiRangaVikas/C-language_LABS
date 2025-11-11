#include<stdio.h>
long int fact(int a);
 int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",fact(n));
}
long int fact(int a){
    if(a==0||a==1){
        return 1;
    }else{
        return a*fact(a-1);
    }
}