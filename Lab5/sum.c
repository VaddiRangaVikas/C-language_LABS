#include<stdio.h>
int main(){
    int a[100]={1,2,3,4,5,6,7,8,9},sum=0;
    for(int i=0;i<9;i++){
        sum=sum+a[i];
    }    
    printf("%d",sum);
}