// print even number n to 1
#include <stdio.h>
int main(){
     int n;
     printf("\n enter no:");
     scanf("%d",&n);
     for (; n>=1;n--)
     {
         if (n%2==0){
            printf("%d \n",n);
        }
     }
     
     
    return 0;
}