#include<stdio.h>
int main(){
    int n,c=0;
    char m=65;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c ",m+j);
        }
        printf("\n");
    }
}  