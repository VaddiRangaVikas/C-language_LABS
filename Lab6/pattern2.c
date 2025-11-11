#include<stdio.h>
int main(){
      int r1,c1;
    printf("enter the rows and coloumns of matrix A");
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i==0||j==0||i==r1-1||j==c1-1){
                a[i][j]=1;
            }else{
                a[i][j]=0;
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}