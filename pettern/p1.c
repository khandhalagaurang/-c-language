#include<stdio.h>
int main (){  
    for (int i=1; i<=5; i++){
        for (int j=5; j>=1; j--){ 
            if (j<=i){
              printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}