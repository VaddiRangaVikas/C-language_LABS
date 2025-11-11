#include<stdio.h>
int main()
{
    int n,co=1;
    printf("Enter the range:");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            if(i==0 || j==0){
                co = 1;
            }else{
                co = co*(i-j+1)/j;
            }
            printf("%d ",co);
        }
        printf("\n");
    }
} 