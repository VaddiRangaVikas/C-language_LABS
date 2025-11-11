#include<stdio.h>
int main(){
    int n,c=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            c=c+1;
            printf("%d ",c);
            
        }
        printf("\n");
    }
}  