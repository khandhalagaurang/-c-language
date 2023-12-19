//print sum 1 to N
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter no :");
    scanf("%d",&n);
      while(i<=n){
        //printf("\n %d",i);
        sum = sum+i;
        i++;
    }
    printf(" \n sum is %d",sum);
    
    return 0;
}