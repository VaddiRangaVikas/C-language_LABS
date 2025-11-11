#include<stdio.h>
int main(){
    int n,c=0;
    char m=65;
    printf("enter the number");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",m);
            m+=1;
        }
        printf("\n");
    }
}