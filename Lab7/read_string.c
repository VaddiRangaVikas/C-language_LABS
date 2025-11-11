#include<stdio.h>
int main(){
    int n;
    printf("enter the number of strings : ");
    scanf("%d",&n);
    char words[n][100];
    for(int i=0;i<n;i++){
        printf("enter the string %d:",i+1);
        scanf("%99s",&words[i]);
    }
    printf("\n you entered:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",words[i]);
    }
}