#include<stdio.h>
int main(){
    int n;
    char m=65;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",m+i);
        }
        printf("\n");
    }
}