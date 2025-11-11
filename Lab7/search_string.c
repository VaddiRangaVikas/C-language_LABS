#include<stdio.h>
#include<string.h>
int main(){
    int x;
    printf("enter the  number of strings:");
    scanf("%d",&x);
    char words[x][100];
    for(int i=0;i<x;i++){
        printf("enter the string %d",i+1);
        scanf("%99s",&words[i]);
    }
    char key[100];
    printf("enter the string to search :");
    scanf("%99s",key);
    int found=0;
    for(int i=0;i<x;i++){
        if((strcmp(words[i],key)==0)){
            printf("string %s found at position %d\n",key,i+1);
            found=1;
        }
    }
    if(!found){
        printf("string %s not found in the array",key);
    }

}