#include<stdio.h>
int main(){
   int a[100]={1,2,3,4,5,5,5,6,6,7,8,9,7,6,5,4};
   for(int i=0;i<16;i++){
    for(int j=i+1;j<16;j++){
        if(a[i]==a[j]){
            for(int k=j;k<16-1;k++){
                a[k]=a[k+1];
            }
            16--;
            j++;
        }
        
    }
   }
    
}