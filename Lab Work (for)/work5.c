// print odd number 1 to n
#include <stdio.h>
int main(){
     int i=1,n;
     printf("\n enter no:");
     scanf("%d",&n);
     for (;i<=n; i++) {
      if (i%2!=0){
           printf("%d \n",i);
        }
     }
     
     
    return 0;
}