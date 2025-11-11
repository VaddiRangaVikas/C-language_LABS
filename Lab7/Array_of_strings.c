#include<stdio.h>
#include<string.h>
int main(){
    char *names[5]={"Vikas","santosh","kowshik","deelip","latheesh"};
    for(int i=0;i<5;i++){
        printf("%s\n",names[i]);
    }
}