#include<stdio.h>
int main(){
    char a[100];
    int c=1;
    printf("enter a sentence");
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' ' && a[i+1]!=' ' && a[i+1]!='\0'){
            c++;
        }
    }
    printf("the number of words in string is %d",c);
}