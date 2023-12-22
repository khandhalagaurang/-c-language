#include<stdio.h>
int main (){
    for (int i=5; i>=1; i--){
        for (int j=5; j>=1; j--){
            if (j>=i){
                printf("%d ",i);
            }  
        }
        printf("\n");
    }
   return 0;
}