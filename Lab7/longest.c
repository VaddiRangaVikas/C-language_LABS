#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("enter the number of strings");
    scanf("%d",&n);
    char a[n][100];
    for(int i=0;i<n;i++){
        printf("enter the string ",i+1);
        scanf("%s",&a[i]);
    }
    int longest=0;
    for(int i=0;i<n;i++){
        if(strlen(a[i])>strlen(a[longest])){
            longest=i;
        }
    }
    printf("%s",a[longest]);

}