#include<stdio.h>
int main(){
    int n;
    printf("enter the number of strings");
    scanf("%d",&n);
    char arr[n][100];
    getchar();
    for(int i=0;i<n;i++){
        printf("enter the string %d",i+1);
        fgets(arr[i],100,stdin);
    }
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}