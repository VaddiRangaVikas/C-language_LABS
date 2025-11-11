#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("enter the number  of string");
    scanf("%d",&n);
    char a[n][100];
    char temp[100];
    for(int i=0;i<n;i++){
        printf("enter the string %d",i+1);
        scanf("%s",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(strcmp(a[j],a[j+1])>0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s ",a[i]);
    }
}