#include<stdio.h>
int main(){
    int n;
    printf("enter the rows and columns");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)%2==0){
                a[i][j]=1;
            }else{
                a[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}