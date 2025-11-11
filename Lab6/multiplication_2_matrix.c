#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    printf("enter the rows1 matrixa:");
    scanf("%d",&r1);
    printf("enter the cols1 matrixa:");
    scanf("%d",&c1);
    printf("enter the rows1 matrixb:");
    scanf("%d",&r2);
    printf("enter the cols1 matrixb:");
    scanf("%d",&c2); 
    int a[r1][c1],b[r2][c2];
    int res[r1][c2];
    printf("enter the matrix a elements:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the matrix b elemenets:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    if(c1==r2){
       for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
        }
       }
       for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
       }
       for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%3d",res[i][j]);
        }
        printf("\n");
       }
    }else{
        printf("multiplication of two matrix is not possible");
    }
    
    
}