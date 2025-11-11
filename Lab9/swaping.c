#include<stdio.h>
int main(){
    int a=10,b=20;
    int *p=&a,*q=&b;
    printf("before swaping a is %d and b is %d\n",a,b);
    printf("%p\n",p);
    int c;
    c=*p;
    *p=*q;
    *q=c;
    printf("after  swaping a is %d and b is %d\n",a,b);
    printf("%p\n",p);




}