#include<stdio.h>
int main(){
    int a[100][100],b[100][100],i,j,k,m,r1,c1,r2,c2;
    printf("enter the rows1 matrixa:");
    scanf("%d",&r1);
    printf("enter the cols1 matrixa:");
    scanf("%d",&c1);
    printf("enter the rows1 matrixb:");
    scanf("%d",&r2);
    printf("enter the cols1 matrixb:");
    scanf("%d",&c2); 

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("enter the elements");
            scanf("%d",&a[i][j]);
        }
    }

    for(k=0;k<r2;k++){
        for(m=0;m<c2;m++){
            printf("enter the elements");
            scanf("%d",&b[k][m]);
        }
    }
    if(r1==r2 && c1==c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%3d",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    }else{
        printf("matrice addition is not possible");
    }
    return 0;
    
}
