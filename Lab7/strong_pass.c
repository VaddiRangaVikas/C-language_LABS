#include<stdio.h>
#include<string.h>
int main(){
    char pass[100];
    printf("enter the password:");
    scanf("%s",&pass);
    if(strlen(pass)>=8){
        printf("it is a strong password");
    }else{
        printf("it is not a strong pass word and \n try another one....");
    }
    printf("\n length of password : %lu",strlen(pass));

}