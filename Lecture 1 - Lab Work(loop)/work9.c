// find the factorial of n using
#include<stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("enter no :");
    scanf("%d",&n);
      while(i<=n){
        //printf("\n %d",i);
        fact = fact*i;
        i++;
    }
    printf(" \n factorial is %d",fact);
    
    return 0;
}