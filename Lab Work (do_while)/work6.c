// print even number n to 1
#include <stdio.h>
int main(){
     int n;
     printf("\n enter no:");
     scanf("%d",&n);
     do{
        if (n%2==0){
            printf("%d \n",n);
        }
        n--;
     } while (n>=1);
     
     
     
    return 0;
}