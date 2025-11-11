#include<stdio.h>
int main(){
    int a[100],n,i,j,max,min;
    printf("enter the length:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        printf("%d\t",a[j]);
    }
    min=a[0];
    max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("\nmax:%d\nmin:%d",max,min);

}