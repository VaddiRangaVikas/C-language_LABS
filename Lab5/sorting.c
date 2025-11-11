#include<stdio.h>
int main(){
    int a[7]={1,10,8,9,3,5,6};
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(a[j]>a[j+1]){
              int  temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;

            }
        }
}
    for(int i=0;i<7;i++){
        printf("%d\t",a[i]);
    }
}
