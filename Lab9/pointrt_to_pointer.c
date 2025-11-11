#include<stdio.h>
int main(){
    int a=10;
    // int *p=&a;
    // int **q=&p;
    // printf("%d\n",a);
    // printf("%p\n",p);
    // printf("%p\n",q);
    int b=10;
    int* p=&b,*q=&a;
    int c[]={10,20,30,40};
    int *w=&c[1];
    printf("%d",*w);
}