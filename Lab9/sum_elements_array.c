#include<stdio.h>
int main(){
    int a[]={10,20,30,40};
    int *p=a,sum=0;
    for(int i=0;i<4;i++){
        sum=sum+*(p+i);
    }
    printf("%d",sum);

}




