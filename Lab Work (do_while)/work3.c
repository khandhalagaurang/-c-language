// print 1 to n
#include <stdio.h>
int main(){
     int i=1,n;
     printf("\n enter no:");
     scanf("%d",&n);
     do
     {
       printf("%d \n",i);
        i++;
     } while (i<=n);
     
    return 0;
}