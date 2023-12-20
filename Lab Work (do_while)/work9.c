// find the factorial of n using
#include<stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("enter no :");
    scanf("%d",&n);
    do{
       fact = fact*i;
        i++;
    } while (i<=n);
    
    printf(" \n factorial is %d",fact);
    
    return 0;
}