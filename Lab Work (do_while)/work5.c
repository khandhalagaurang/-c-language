// print odd number 1 to n
#include <stdio.h>
int main(){
     int i=1,n;
     printf("\n enter no:");
     scanf("%d",&n);
     do{
     if (i%2!=0){
           printf("%d \n",i);
        }
        i++;
     } while (i<=n);
     
     
    return 0;
}